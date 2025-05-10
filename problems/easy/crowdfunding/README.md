# Challenge 1 - Easy

Crowdfunding is a popular way to raise funds for projects. Your task is to create a Solidity contract that allows users to contribute Ether to a crowdfunding campaign, with a funding goal and a deadline. If the goal is met, the creator can withdraw the funds; otherwise, contributors can reclaim their Ether.
_Requirements_

- Set a funding goal (in Ether) and a deadline (timestamp) during deployment.

- Users can contribute Ether to the campaign.

- If the deadline passes and the goal is met, the creator can withdraw the funds.

- If the deadline passes and the goal isn’t met, contributors can withdraw their contributions.

## Foundry Setup

**Foundry is a blazing fast, portable and modular toolkit for Ethereum application development written in Rust.**

Foundry consists of:

- **Forge**: Ethereum testing framework (like Truffle, Hardhat and DappTools).
- **Cast**: Swiss army knife for interacting with EVM smart contracts, sending transactions and getting chain data.
- **Anvil**: Local Ethereum node, akin to Ganache, Hardhat Network.
- **Chisel**: Fast, utilitarian, and verbose solidity REPL.

## Documentation

https://book.getfoundry.sh/

## Usage

### Build

```shell
$ forge build
```

### Test

```shell
$ forge test
```

### Format

```shell
$ forge fmt
```

### Gas Snapshots

```shell
$ forge snapshot
```

### Anvil

```shell
$ anvil
```

### Deploy

```shell
$ forge script script/Counter.s.sol:CounterScript --rpc-url <your_rpc_url> --private-key <your_private_key>
```

### Cast

```shell
$ cast <subcommand>
```

### Help

```shell
$ forge --help
$ anvil --help
$ cast --help
```
