// SPDX-License-Identifier: MIT

pragma solidity ^0.8.0;

import {Test, console} from "forge-std/Test.sol";
import {MultiSigWallet} from "src/MultiSig.sol";

contract MultiSigTest is Test {
    MultiSigWallet multisig;
    address owner1 = makeAddr("Owner1");
    address owner2 = makeAddr("Owner2");
    address owner3 = makeAddr("Owner3");
    address nonOwner = makeAddr("NonOwner");

    function setUp() external {
        address[] memory owners = new address[](3);
        owners[0] = owner1;
        owners[1] = owner2;
        owners[2] = owner3;

        multisig = new MultiSigWallet(owners, 2);
        vm.deal(address(multisig), 10 ether);
    }

    function testSubmitWithdrawal() external {
        console.log("Initial balance:", address(multisig).balance);
        vm.prank(owner1);
        multisig.submitWithdrawal(msg.sender, 1 ether);
        (address to, uint256 value, bool executed, uint256 approvalCount) = multisig.transactions(0);
        assertEq(to, msg.sender);
        assertEq(value, 1 ether);
        assertEq(executed, false);
        assertEq(approvalCount, 0);
        assertEq(multisig.transactionCount(), 1);

        vm.prank(nonOwner);
        vm.expectRevert();
        multisig.submitWithdrawal(msg.sender, 1 ether);
    }

    function testApproval() external {
        vm.prank(owner1);
        multisig.submitWithdrawal(msg.sender, 1 ether);
        vm.prank(owner2);
        multisig.approveWithdrawal(0);
        vm.prank(owner3);
        multisig.approveWithdrawal(0);
        vm.startPrank(owner1);
        vm.expectRevert();
        multisig.approveWithdrawal(0);
        multisig.submitWithdrawal(nonOwner, 3 ether);

        vm.expectRevert();
        multisig.executeWithdrawal(1);
        vm.stopPrank();

        (,,, uint256 approvalCount) = multisig.transactions(0);
        assertEq(approvalCount, 2);
    }

    function testExecuteWithdrawal() external {
        vm.prank(owner1);
        multisig.submitWithdrawal(msg.sender, 5 ether);
        vm.prank(owner2);
        multisig.approveWithdrawal(0);
        vm.prank(owner3);
        multisig.approveWithdrawal(0);

        uint256 initialBalance = address(multisig).balance;
        vm.prank(owner1);
        multisig.executeWithdrawal(0);
        assertEq(address(multisig).balance, initialBalance - 5 ether);
    }
}
