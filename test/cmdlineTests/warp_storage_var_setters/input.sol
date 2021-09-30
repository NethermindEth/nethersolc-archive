pragma solidity >=0.4.18;

contract WARP {
    mapping (uint256 => mapping (uint256 => uint)) allowance;

    function deposit(uint256 sender, uint256 value) public payable {
        allowance[sender][value] += 5;
    }
}
