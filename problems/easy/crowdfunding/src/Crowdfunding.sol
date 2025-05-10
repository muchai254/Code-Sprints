// SPDX-License-Identifier: MIT

pragma solidity ^0.8.0;

contract Crowdfunding {
    uint256 goal;
    uint256 deadline;
    uint256 public totalRaised;
    address public creator;
    mapping(address => uint256) public contributions;

    constructor(uint256 _goal, uint256 _deadline) {}

    function donate() public payable {}

    function withdraw() public {}
}
