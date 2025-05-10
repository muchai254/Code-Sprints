// SPDX-License-Identifier: MIT

pragma solidity ^0.8.0;

import {Test, console} from "forge-std/Test.sol";
import {Crowdfunding} from "../src/Crowdfunding.sol";

contract CrowdfundingTest is Test {
    address creator = makeAddr("Creator");
    address john = makeAddr("John");
    address alice = makeAddr("Alice");
    address bob = makeAddr("Bob");

    Crowdfunding crowdfunding;

    function setUp() public {
        vm.startPrank(creator);
        crowdfunding = new Crowdfunding(10 ether, block.timestamp + 1 days);
        vm.stopPrank();

        vm.deal(john, 20 ether);
        vm.deal(alice, 20 ether);
        vm.deal(bob, 20 ether);
    }

    function testDonate() external {
        uint256 donationAmount = 5 ether;

        vm.prank(john);
        crowdfunding.donate{value: donationAmount}();
        vm.prank(alice);
        crowdfunding.donate{value: donationAmount}();
        vm.prank(bob);
        crowdfunding.donate{value: donationAmount}();

        assertEq(crowdfunding.contributions(john), donationAmount);
        assertEq(crowdfunding.contributions(alice), donationAmount);
        assertEq(crowdfunding.contributions(bob), donationAmount);
        assertEq(crowdfunding.totalRaised(), (donationAmount * 3));
    }

    function testUserWithdrawFailsGoalReached() external {
        uint256 donationAmount = 5 ether;

        vm.prank(john);
        crowdfunding.donate{value: donationAmount}();
        vm.prank(alice);
        crowdfunding.donate{value: donationAmount}();
        vm.prank(bob);
        crowdfunding.donate{value: donationAmount}();
        console.log("Total Raised:", crowdfunding.totalRaised());
        vm.warp(block.timestamp + 1 days);
        vm.roll(1 days);

        vm.prank(john);
        vm.expectRevert();
        crowdfunding.withdraw();

        assertEq(crowdfunding.totalRaised(), (donationAmount * 3));
        assertEq(crowdfunding.contributions(john), donationAmount);
    }

    function testUserWithdrawalGoalNotReached() external {
        vm.prank(john);
        crowdfunding.donate{value: 1 ether}();
        vm.prank(alice);
        crowdfunding.donate{value: 2 ether}();
        vm.prank(bob);
        crowdfunding.donate{value: 2 ether}();

        vm.warp(block.timestamp + 1 days);
        vm.roll(1 days);

        assertEq(crowdfunding.totalRaised(), (5 ether));

        vm.prank(bob);
        crowdfunding.withdraw();

        assertEq(crowdfunding.totalRaised(), 3 ether);
        assertEq(crowdfunding.contributions(bob), 0 ether);
        assertEq(crowdfunding.contributions(alice), 2 ether);

        vm.prank(creator);
        crowdfunding.withdraw();

        assertEq(crowdfunding.totalRaised(), 3 ether);
    }

    function testCreatorWithdrawTargetReached() external {
        vm.prank(john);
        crowdfunding.donate{value: 10 ether}();

        vm.warp(block.timestamp + 1 days);
        vm.roll(1 days);

        assertEq(crowdfunding.totalRaised(), 10 ether);

        vm.prank(creator);
        crowdfunding.withdraw();

        assertEq(crowdfunding.totalRaised(), 0 ether);
    }
}
