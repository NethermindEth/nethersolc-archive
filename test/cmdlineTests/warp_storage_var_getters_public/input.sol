pragma solidity >=0.4.18;

contract WARP {
    mapping (uint256 => mapping (uint256 => uint256)) public allowance;

    function deposit(uint256 sender, uint256 value) public view returns (uint256)  {
        return allowance[sender][value];
    }
}
