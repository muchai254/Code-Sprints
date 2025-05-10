// SPDX-License-Identifier: MIT

pragma solidity ^0.8.0;

contract MultiSigWallet {
    error Multisig__MustHaveAtleastOneOwner();
    error Multisig__NotAnOwner();
    error Multisig__AlreadyApproved();
    error Multisig__TxAlreadyExecuted();
    error Multisig__NotEnoughApprovals();

    address[] public owners;
    uint256 public requiredApprovals;
    mapping(address => bool) public isOwner;
    mapping(uint256 => mapping(address => bool)) public approvals;

    event TransactionSubmitted(uint256 indexed txId, address indexed to, uint256 value);

    struct Transaction {
        address to;
        uint256 value;
        bool executed;
        uint256 approvalCount;
    }

    Transaction[] public transactions;

    constructor(address[] memory _owners, uint256 _requiredApprovals) {}

    modifier onlyOwners(address _user) {
        if (!isOwner[_user]) revert Multisig__NotAnOwner();
        _;
    }

    function submitWithdrawal(address _to, uint256 _value) external onlyOwners(msg.sender) {}

    function approveWithdrawal(uint256 _txId) external onlyOwners(msg.sender) {}

    function executeWithdrawal(uint256 _txId) external onlyOwners(msg.sender) {}

    function transactionCount() external view returns (uint256) {
        return transactions.length;
    }
}
