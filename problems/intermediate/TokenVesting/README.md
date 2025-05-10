## Challenge details

Token vesting ensures gradual release of tokens to beneficiaries, common in startups and DAOs. Your task is to create a contract where an admin locks ERC20 tokens for a beneficiary, releasing them linearly over a vesting period.
**Requirements**

- Admin sets the beneficiary, vesting duration, and total token amount during deployment.

- Tokens are released linearly over time; beneficiary can claim available tokens.

- Use OpenZeppelin’s ERC20 library.

- Include a function to check claimable tokens.

## Project SetUp

Install Foundry if you have it installed, You can check with:

```shell
forge --version
```

If not install, install with the following command

```shell
curl -L https://foundry.paradigm.xyz | bash

```

This will install Foundryup. Simply follow the on-screen instructions, and the foundryup command will become available in your CLI.

Then for this challenge, you will need to install openzeppelin package, Should be installed with the following command

```shell
$ forge install OpenZeppelin/openzeppelin-contracts
```

and then you are good to go!!!!!

## Documentation

https://book.getfoundry.sh/

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
