// SPDX-License-Identifier: MIT

pragma solidity ^0.8.0;

import {IERC20} from "@openzeppelin/contracts/token/ERC20/IERC20.sol";
import {SafeERC20} from "@openzeppelin/contracts/token/ERC20/utils/SafeERC20.sol";

contract TokenVesting {
    using SafeERC20 for IERC20;

    error TokenVesting__vestingNotStarted();

    IERC20 public token;
    address public admin;
    address public beneficiary;
    uint256 public startTime;
    uint256 public duration;
    uint256 public totalAmount;
    uint256 public claimedAmount;

    event TokensClaimed(address indexed beneficiary, uint256 amount);

    constructor(address _token, address _beneficiary, uint256 _startTime, uint256 _duration, uint256 _totalAmount) {}

    function claim() public {}

    function _calculateVestedAmount() private view returns (uint256) {}

    function getClaimableAmount() public view returns (uint256) {
\
    }
}
