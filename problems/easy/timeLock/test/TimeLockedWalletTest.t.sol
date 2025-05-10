// SPDX-License-Identifier: MIT

pragma solidity ^0.8.0;

import {Test} from "forge-std/Test.sol";
import {TimeLockedWallet} from "../src/TimeLockedWallet.sol";

contract TimeLockedwalletTest is Test {
    address bob = makeAddr("Bob");
    address alice = makeAddr("Alice");
    TimeLockedWallet wallet;

    function setUp() external {
        vm.deal(bob, 10 ether);
        vm.prank(bob);
        wallet = new TimeLockedWallet{value: 1 ether}(1 days);
    }

    function testDeposit() external {
        vm.startPrank(bob);
        (bool success,) = payable(wallet).call{value: 1 ether}("");
        if (!success) {
            revert("Deposit failed");
        }
        assertEq(address(wallet).balance, 2 ether);

        vm.expectRevert();
        wallet.withdraw();
        assertEq(address(wallet).balance, 2 ether);
        vm.stopPrank();
    }

    function testAttackerWithdrawFails() external {
        vm.warp(1 days + 1);
        vm.roll(1 days);
        vm.startPrank(alice);
        vm.expectRevert();
        wallet.withdraw();
        assertEq(address(wallet).balance, 1 ether);
        vm.stopPrank();
    }

    function testWithdrawalBeforeUnlockFails() external {
        vm.prank(bob);
        vm.expectRevert();
        wallet.withdraw();
        assertEq(address(wallet).balance, 1 ether);
    }

    function testWithdrawalAfterUnlockTime() external {
        vm.warp(1 days + 1);
        vm.roll(1 days);
        vm.prank(bob);
        wallet.withdraw();
        assertEq(address(wallet).balance, 0 ether);
    }
}
