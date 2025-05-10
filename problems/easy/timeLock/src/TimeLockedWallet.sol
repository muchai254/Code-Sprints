// SPDX-License-Identifier: MIT

pragma solidity ^0.8.0;

contract TimeLockedWallet {
    error TimeLockedWallet__NotUnlocked(uint256 unlockTime);
    error TimeLockedWallet__TransferFailed(bytes data);

    address public owner;
    uint256 public unlockTime;
    uint256 lockDuration;

    constructor(uint256 _lockDuration) {}

    receive() external payable {}

    function withdraw() external {}
}
