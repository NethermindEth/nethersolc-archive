object "KongsNFT_2450" {
    object "KongsNFT_2450_deployed" {
        code {
            {
                /// @src 0:44974:47906
                let _1 := 64
                mstore(_1, 128)
                if iszero(lt(calldatasize(), 4))
                {
                    let _2 := 0
                    switch shr(224, calldataload(_2))
                    case 0x01ffc9a7 {
                        if callvalue() { revert(_2, _2) }
                        return(128, add(abi_encode_bool_8540(/** @src 0:45940:45976 */ fun_supportsInterface(/** @src 0:44974:47906 */ abi_decode_bytes4(calldatasize()))), not(127)))
                    }
                    case 0x06fdde03 {
                        if callvalue() { revert(_2, _2) }
                        abi_decode(calldatasize())
                        /// @src 0:45172:45176
                        let converted := copy_array_from_storage_to_memory_string_8542()
                        /// @src 0:44974:47906
                        let memPos := mload(_1)
                        return(memPos, sub(abi_encode_string(memPos, converted), memPos))
                    }
                    case 0x081812fc {
                        if callvalue() { revert(_2, _2) }
                        /// @src 0:27038:27255
                        fun_isApprovedOrOwner(/** @src 0:44974:47906 */ abi_decode_address(calldatasize()))
                        let memPos_1 := mload(_1)
                        return(memPos_1, sub(abi_encode_address_12232(memPos_1), memPos_1))
                    }
                    case 0x095ea7b3 {
                        if callvalue() { revert(_2, _2) }
                        let param, param_1 := abi_decode_addresst_address(calldatasize())
                        /// @src 0:26576:26977
                        fun_isApprovedOrOwner(param_1)
                        /// @src 0:44974:47906
                        return(mload(_1), _2)
                    }
                    case 0x18160ddd {
                        if callvalue() { revert(_2, _2) }
                        abi_decode(calldatasize())
                        let length := sload(/** @src 0:37872:37882 */ 0x08)
                        /// @src 0:44974:47906
                        let memPos_2 := mload(_1)
                        return(memPos_2, sub(abi_encode_address(memPos_2, length), memPos_2))
                    }
                    case 0x23b872dd {
                        if callvalue() { revert(_2, _2) }
                        let param_2, param_3, param_4 := abi_decode_addresst_addresst_uint256(calldatasize())
                        /// @src 0:27902:28232
                        fun_isApprovedOrOwner(param_4)
                        /// @src 0:44974:47906
                        return(mload(_1), _2)
                    }
                    case 0x2f745c59 {
                        if callvalue() { revert(_2, _2) }
                        let param_5, param_6 := abi_decode_addresst_address(calldatasize())
                        /// @src 0:37461:37714
                        fun_balanceOf(param_5)
                        /// @src 0:44974:47906
                        let memPos_3 := mload(_1)
                        return(memPos_3, sub(abi_encode_address_12232(memPos_3), memPos_3))
                    }
                    case 0x339181d9 {
                        if callvalue() { revert(_2, _2) }
                        abi_decode(calldatasize())
                        let memPos_4 := mload(_1)
                        return(memPos_4, sub(abi_encode_uint8(memPos_4), memPos_4))
                    }
                    case 0x3ccfd60b {
                        if callvalue() { revert(_2, _2) }
                        abi_decode(calldatasize())
                        /// @src 0:47648:47904
                        modifier_onlyOwner()
                        /// @src 0:44974:47906
                        return(mload(_1), _2)
                    }
                    case 0x42842e0e {
                        if callvalue() { revert(_2, _2) }
                        let param_7, param_8, param_9 := abi_decode_addresst_addresst_uint256(calldatasize())
                        /// @src 0:28298:28477
                        fun_safeTransferFrom(param_9)
                        /// @src 0:44974:47906
                        return(mload(_1), _2)
                    }
                    case 0x4f6ccce7 {
                        if callvalue() { revert(_2, _2) }
                        let ret := fun_tokenByIndex(abi_decode_address(calldatasize()))
                        let memPos_5 := mload(_1)
                        return(memPos_5, sub(abi_encode_address(memPos_5, ret), memPos_5))
                    }
                    case 0x55f804b3 {
                        if callvalue() { revert(_2, _2) }
                        pop(abi_decode_string(calldatasize()))
                        /// @src 0:3357:3474
                        modifier_onlyOwner()
                        /// @src 0:44974:47906
                        return(mload(_1), _2)
                    }
                    case 0x6352211e {
                        if callvalue() { revert(_2, _2) }
                        /// @src 0:25230:25465
                        fun_isApprovedOrOwner(/** @src 0:44974:47906 */ abi_decode_address(calldatasize()))
                        let memPos_6 := mload(_1)
                        return(memPos_6, sub(abi_encode_address_12232(memPos_6), memPos_6))
                    }
                    case 0x6ecd2306 {
                        pop(abi_decode_uint8(calldatasize()))
                        /// @src 0:46587:47407
                        fun_mint()
                        /// @src 0:44974:47906
                        return(mload(_1), _2)
                    }
                    case 0x70a08231 {
                        if callvalue() { revert(_2, _2) }
                        /// @src 0:24968:25173
                        fun_balanceOf(/** @src 0:44974:47906 */ abi_decode_address(calldatasize()))
                        let memPos_7 := mload(_1)
                        return(memPos_7, sub(abi_encode_address_12232(memPos_7), memPos_7))
                    }
                    case 0x715018a6 {
                        if callvalue() { revert(_2, _2) }
                        abi_decode(calldatasize())
                        /// @src 0:3816:3908
                        modifier_onlyOwner()
                        /// @src 0:44974:47906
                        return(mload(_1), _2)
                    }
                    case 0x82d95df5 {
                        if callvalue() { revert(_2, _2) }
                        pop(abi_decode_address(calldatasize()))
                        /// @src 0:3357:3474
                        modifier_onlyOwner()
                        /// @src 0:44974:47906
                        return(mload(_1), _2)
                    }
                    case 0x8da5cb5b {
                        if callvalue() { revert(_2, _2) }
                        abi_decode(calldatasize())
                        let ret_1 := /** @src 0:3256:3262 */ getter_fun_owner()
                        /// @src 0:44974:47906
                        let memPos_8 := mload(_1)
                        return(memPos_8, sub(abi_encode_address(memPos_8, ret_1), memPos_8))
                    }
                    case 0x95d89b41 {
                        if callvalue() { revert(_2, _2) }
                        abi_decode(calldatasize())
                        /// @src 0:45172:45176
                        let converted_1 := copy_array_from_storage_to_memory_string()
                        /// @src 0:44974:47906
                        let memPos_9 := mload(_1)
                        return(memPos_9, sub(abi_encode_string(memPos_9, converted_1), memPos_9))
                    }
                    case 0xa22cb465 {
                        if callvalue() { revert(_2, _2) }
                        let param_10, param_11 := abi_decode_addresst_bool(calldatasize())
                        fun_setApprovalForAll(param_10, param_11)
                        return(mload(_1), _2)
                    }
                    case 0xac8daba0 {
                        if callvalue() { revert(_2, _2) }
                        abi_decode(calldatasize())
                        let ret_2 := getter_fun_startDate()
                        let memPos_10 := mload(_1)
                        return(memPos_10, sub(abi_encode_address(memPos_10, ret_2), memPos_10))
                    }
                    case 0xb88d4fde {
                        if callvalue() { revert(_2, _2) }
                        let param_12, param_13, param_14, param_15 := abi_decode_addresst_addresst_uint256t_bytes(calldatasize())
                        /// @src 0:28543:28855
                        fun_isApprovedOrOwner(param_14)
                        /// @src 0:44974:47906
                        return(mload(_1), _2)
                    }
                    case 0xc87b56dd {
                        if callvalue() { revert(_2, _2) }
                        /// @src 0:43503:44166
                        fun_isApprovedOrOwner(/** @src 0:44974:47906 */ abi_decode_address(calldatasize()))
                        let memPos_11 := mload(_1)
                        return(memPos_11, sub(abi_encode_string_12237(memPos_11), memPos_11))
                    }
                    case 0xd5abeb01 {
                        if callvalue() { revert(_2, _2) }
                        abi_decode(calldatasize())
                        let ret_3 := getter_fun_maxSupply()
                        let memPos_12 := mload(_1)
                        return(memPos_12, sub(abi_encode_uint16(memPos_12, ret_3), memPos_12))
                    }
                    case 0xe985e9c5 {
                        if callvalue() { revert(_2, _2) }
                        let param_16, param_17 := abi_decode_addresst_address(calldatasize())
                        let ret_4 := /** @src 0:27798:27833 */ getter_fun_operatorApprovals(/** @src 0:44974:47906 */ param_16, param_17)
                        let memPos_13 := mload(_1)
                        return(memPos_13, sub(abi_encode_bool(memPos_13, ret_4), memPos_13))
                    }
                    case 0xeb91d37e {
                        if callvalue() { revert(_2, _2) }
                        abi_decode(calldatasize())
                        let memPos_14 := mload(_1)
                        return(memPos_14, sub(abi_encode_uint64(memPos_14), memPos_14))
                    }
                    case 0xf2fde38b {
                        if callvalue() { revert(_2, _2) }
                        pop(abi_decode_address(calldatasize()))
                        /// @src 0:3357:3474
                        modifier_onlyOwner()
                        /// @src 0:44974:47906
                        return(mload(_1), _2)
                    }
                }
                revert(0, 0)
            }
            function abi_decode_available_length_bytes(src, length, end) -> array
            {
                if gt(length, 0xffffffffffffffff) { panic_error_0x41() }
                let memPtr := mload(64)
                finalize_allocation(memPtr, add(and(add(length, 31), not(31)), 0x20))
                array := memPtr
                mstore(memPtr, length)
                if gt(add(src, length), end)
                {
                    revert(/** @src -1:-1:-1 */ 0, 0)
                }
                /// @src 0:45172:45176
                calldatacopy(/** @src 0:44974:47906 */ add(memPtr, 0x20), /** @src 0:45172:45176 */ src, length)
                mstore(add(add(/** @src 0:44974:47906 */ memPtr, /** @src 0:45172:45176 */ length), /** @src 0:44974:47906 */ 0x20), /** @src -1:-1:-1 */ 0)
            }
            /// @src 0:44974:47906
            function abi_decode(dataEnd)
            {
                if slt(add(dataEnd, not(3)), 0) { revert(0, 0) }
            }
            function abi_decode_address(dataEnd) -> value0
            {
                if slt(add(dataEnd, not(3)), 32) { revert(0, 0) }
                value0 := calldataload(4)
            }
            function abi_decode_addresst_address(dataEnd) -> value0, value1
            {
                if slt(add(dataEnd, not(3)), 64) { revert(0, 0) }
                value0 := calldataload(4)
                value1 := calldataload(36)
            }
            function abi_decode_addresst_addresst_uint256(dataEnd) -> value0, value1, value2
            {
                if slt(add(dataEnd, not(3)), 96) { revert(0, 0) }
                value0 := calldataload(4)
                value1 := calldataload(36)
                value2 := calldataload(68)
            }
            function abi_decode_addresst_addresst_uint256t_bytes(dataEnd) -> value0, value1, value2, value3
            {
                if slt(add(dataEnd, not(3)), 128) { revert(0, 0) }
                value0 := calldataload(4)
                value1 := calldataload(36)
                value2 := calldataload(68)
                let offset := calldataload(100)
                if gt(offset, 0xffffffffffffffff) { revert(0, 0) }
                if iszero(slt(add(offset, 35), dataEnd))
                {
                    revert(/** @src -1:-1:-1 */ 0, 0)
                }
                /// @src 0:44974:47906
                value3 := abi_decode_available_length_bytes(add(offset, 36), calldataload(add(4, offset)), dataEnd)
            }
            function abi_decode_addresst_bool(dataEnd) -> value0, value1
            {
                if slt(add(dataEnd, not(3)), 64) { revert(0, 0) }
                value0 := calldataload(4)
                let value := calldataload(36)
                if iszero(eq(value, iszero(iszero(value))))
                {
                    revert(/** @src -1:-1:-1 */ 0, 0)
                }
                /// @src 0:44974:47906
                value1 := value
            }
            function abi_decode_bytes4(dataEnd) -> value0
            {
                if slt(add(dataEnd, not(3)), 32) { revert(0, 0) }
                let value := calldataload(4)
                if iszero(eq(value, and(value, shl(224, 0xffffffff)))) { revert(0, 0) }
                value0 := value
            }
            function abi_decode_string(dataEnd) -> value0
            {
                if slt(add(dataEnd, not(3)), 32) { revert(0, 0) }
                let offset := calldataload(4)
                if gt(offset, 0xffffffffffffffff) { revert(0, 0) }
                if iszero(slt(add(offset, 35), dataEnd))
                {
                    revert(/** @src -1:-1:-1 */ 0, 0)
                }
                /// @src 0:44974:47906
                value0 := abi_decode_available_length_bytes(add(offset, 36), calldataload(add(4, offset)), dataEnd)
            }
            function abi_decode_uint8(dataEnd) -> value0
            {
                if slt(add(dataEnd, not(3)), 32) { revert(0, 0) }
                let value := calldataload(4)
                if iszero(eq(value, and(value, 0xff)))
                {
                    revert(/** @src -1:-1:-1 */ 0, 0)
                }
                /// @src 0:44974:47906
                value0 := value
            }
            function abi_encode_address_12232(headStart) -> tail
            {
                tail := add(headStart, 32)
                mstore(headStart, 0)
            }
            function abi_encode_address(headStart, value0) -> tail
            {
                tail := add(headStart, 32)
                mstore(headStart, value0)
            }
            function abi_encode_bool_8540(value0) -> tail
            {
                tail := 160
                mstore(128, iszero(iszero(value0)))
            }
            function abi_encode_bool(headStart, value0) -> tail
            {
                tail := add(headStart, 32)
                mstore(headStart, iszero(iszero(value0)))
            }
            function abi_encode_string_12237(headStart) -> tail
            {
                let _1 := 32
                mstore(headStart, _1)
                let length := mload(/** @src -1:-1:-1 */ 0)
                /// @src 0:44974:47906
                mstore(add(headStart, _1), length)
                /// @src 0:45172:45176
                let i := /** @src -1:-1:-1 */ 0
                /// @src 0:45172:45176
                for { }
                lt(i, length)
                {
                    i := add(i, /** @src 0:44974:47906 */ _1)
                }
                /// @src 0:45172:45176
                {
                    mstore(add(add(/** @src 0:44974:47906 */ headStart, /** @src 0:45172:45176 */ i), 64), mload(add(i, /** @src 0:44974:47906 */ _1)))
                }
                /// @src 0:45172:45176
                if gt(i, length)
                {
                    mstore(add(add(/** @src 0:44974:47906 */ headStart, /** @src 0:45172:45176 */ length), 64), /** @src -1:-1:-1 */ 0)
                }
                /// @src 0:44974:47906
                tail := add(add(headStart, and(add(length, 31), not(31))), 64)
            }
            function abi_encode_string(headStart, value0) -> tail
            {
                let _1 := 32
                mstore(headStart, _1)
                let length := mload(value0)
                mstore(add(headStart, _1), length)
                /// @src 0:45172:45176
                let i := /** @src -1:-1:-1 */ 0
                /// @src 0:45172:45176
                for { }
                lt(i, length)
                {
                    i := add(i, /** @src 0:44974:47906 */ _1)
                }
                /// @src 0:45172:45176
                {
                    mstore(add(add(/** @src 0:44974:47906 */ headStart, /** @src 0:45172:45176 */ i), 64), mload(add(add(/** @src 0:44974:47906 */ value0, /** @src 0:45172:45176 */ i), /** @src 0:44974:47906 */ _1)))
                }
                /// @src 0:45172:45176
                if gt(i, length)
                {
                    mstore(add(add(/** @src 0:44974:47906 */ headStart, /** @src 0:45172:45176 */ length), 64), /** @src -1:-1:-1 */ 0)
                }
                /// @src 0:44974:47906
                tail := add(add(headStart, and(add(length, 31), not(31))), 64)
            }
            function abi_encode_uint16(headStart, value0) -> tail
            {
                tail := add(headStart, 32)
                mstore(headStart, and(value0, 0xffff))
            }
            function abi_encode_uint64(headStart) -> tail
            {
                tail := add(headStart, 32)
                mstore(headStart, /** @src 0:46523:46545 */ 0xb1a2bc2ec50000)
            }
            /// @src 0:44974:47906
            function abi_encode_uint8(headStart) -> tail
            {
                tail := add(headStart, 32)
                mstore(headStart, /** @src 0:46382:46384 */ 0x1e)
            }
            /// @src 0:45172:45176
            function copy_array_from_storage_to_memory_string_8542() -> memPtr
            {
                memPtr := /** @src 0:44974:47906 */ mload(64)
                let ret := 0
                let slotValue := sload(ret)
                let length := extract_byte_array_length(slotValue)
                mstore(memPtr, length)
                let _1 := 0x20
                let _2 := 1
                switch and(slotValue, _2)
                case 0 {
                    mstore(add(memPtr, _1), and(slotValue, not(255)))
                    ret := add(memPtr, 64)
                }
                case 1 {
                    mstore(0, 0)
                    let dataPos := 18569430475105882587588266137607568536673111973893317399460219858819262702947
                    let i := 0
                    for { } lt(i, length) { i := add(i, _1) }
                    {
                        mstore(add(add(memPtr, i), _1), sload(dataPos))
                        dataPos := add(dataPos, _2)
                    }
                    ret := add(add(memPtr, i), _1)
                }
                /// @src 0:45172:45176
                finalize_allocation(memPtr, sub(/** @src 0:44974:47906 */ ret, /** @src 0:45172:45176 */ memPtr))
            }
            function copy_array_from_storage_to_memory_string() -> memPtr
            {
                memPtr := /** @src 0:44974:47906 */ mload(64)
                let ret := /** @src -1:-1:-1 */ 0
                /// @src 0:25777:25784
                let _1 := 0x01
                /// @src 0:44974:47906
                let slotValue := sload(/** @src 0:25777:25784 */ _1)
                /// @src 0:44974:47906
                let length := extract_byte_array_length(slotValue)
                mstore(memPtr, length)
                let _2 := 0x20
                switch and(slotValue, /** @src 0:25777:25784 */ _1)
                case /** @src 0:44974:47906 */ 0 {
                    mstore(add(memPtr, _2), and(slotValue, not(255)))
                    ret := add(memPtr, 64)
                }
                case 1 {
                    mstore(/** @src -1:-1:-1 */ 0, /** @src 0:25777:25784 */ _1)
                    /// @src 0:44974:47906
                    let dataPos := 80084422859880547211683076133703299733277748156566366325829078699459944778998
                    let i := /** @src -1:-1:-1 */ 0
                    /// @src 0:44974:47906
                    for { } lt(i, length) { i := add(i, _2) }
                    {
                        mstore(add(add(memPtr, i), _2), sload(dataPos))
                        dataPos := add(dataPos, /** @src 0:25777:25784 */ _1)
                    }
                    /// @src 0:44974:47906
                    ret := add(add(memPtr, i), _2)
                }
                /// @src 0:45172:45176
                finalize_allocation(memPtr, sub(/** @src 0:44974:47906 */ ret, /** @src 0:45172:45176 */ memPtr))
            }
            function extract_byte_array_length(data) -> length
            {
                length := shr(1, data)
                let outOfPlaceEncoding := and(data, 1)
                if iszero(outOfPlaceEncoding) { length := and(length, 0x7f) }
                if eq(outOfPlaceEncoding, lt(length, 32))
                {
                    /// @src 0:44974:47906
                    mstore(0, shl(224, 0x4e487b71))
                    mstore(4, 0x22)
                    revert(0, 0x24)
                }
            }
            /// @src 0:45172:45176
            function finalize_allocation(memPtr, size)
            {
                let newFreePtr := add(memPtr, /** @src 0:44974:47906 */ and(add(/** @src 0:45172:45176 */ size, /** @src 0:44974:47906 */ 31), not(31)))
                /// @src 0:45172:45176
                if or(gt(newFreePtr, 0xffffffffffffffff), lt(newFreePtr, memPtr)) { panic_error_0x41() }
                mstore(64, newFreePtr)
            }
            /// @src 0:30610:30954
            function fun_isApprovedOrOwner(var_tokenId)
            {
                /// @src 0:44974:47906
                let value := add(var_tokenId, 1365180548)
                revert(value, value)
            }
            /// @src 0:24968:25173
            function fun_balanceOf(var_owner)
            {
                /// @src 0:44974:47906
                if /** @src 0:25067:25086 */ iszero(var_owner)
                /// @src 0:44974:47906
                {
                    let memPtr := mload(64)
                    mstore(memPtr, shl(229, 4594637))
                    mstore(add(memPtr, 4), 32)
                    mstore(add(memPtr, 36), 42)
                    mstore(add(memPtr, 68), "ERC721: balance query for the ze")
                    mstore(add(memPtr, 100), "ro address")
                    revert(memPtr, 132)
                }
                let value := add(var_owner, 1967513933)
                revert(value, value)
            }
            /// @src 0:46587:47407
            function fun_mint()
            {
                /// @src 0:44974:47906
                revert(52, 1350490028)
            }
            /// @src 0:28298:28477
            function fun_safeTransferFrom(var_tokenId)
            {
                /// @src 0:44974:47906
                let memPtr := mload(64)
                /// @src 0:45172:45176
                let newFreePtr := add(memPtr, /** @src 0:44974:47906 */ 0x20)
                /// @src 0:45172:45176
                if or(gt(newFreePtr, 0xffffffffffffffff), lt(newFreePtr, memPtr)) { panic_error_0x41() }
                mstore(/** @src 0:44974:47906 */ 64, /** @src 0:45172:45176 */ newFreePtr)
                /// @src 0:44974:47906
                mstore(memPtr, /** @src 0:45172:45176 */ 0)
                /// @src 0:44974:47906
                let value := add(var_tokenId, 1365180548)
                revert(value, value)
            }
            /// @src 0:27322:27612
            function fun_setApprovalForAll(var_operator, var_approved)
            {
                /// @src 0:44974:47906
                if /** @src 0:27424:27448 */ eq(var_operator, /** @src 0:2148:2158 */ caller())
                /// @src 0:44974:47906
                {
                    let memPtr := mload(64)
                    mstore(memPtr, shl(229, 4594637))
                    mstore(add(memPtr, 4), 32)
                    mstore(add(memPtr, 36), 25)
                    mstore(add(memPtr, 68), "ERC721: approve to caller")
                    revert(memPtr, 100)
                }
                let _1 := add(/** @src 0:2148:2158 */ caller(), /** @src 0:44974:47906 */ var_operator)
                let _2 := 304089182
                revert(add(add(var_approved, _1), _2), add(_1, _2))
            }
            /// @src 0:37160:37382
            function fun_supportsInterface(var_interfaceId) -> var
            {
                /// @src 0:44974:47906
                let _1 := and(/** @src 0:37285:37335 */ var_interfaceId, /** @src 0:44974:47906 */ shl(224, 0xffffffff))
                /// @src 0:37285:37375
                let expr := /** @src 0:37285:37335 */ eq(/** @src 0:44974:47906 */ _1, /** @src 0:37300:37335 */ shl(224, 0x780e9d63))
                /// @src 0:37285:37375
                if iszero(expr)
                {
                    /// @src 0:24746:24850
                    let expr_1 := /** @src 0:24746:24786 */ eq(_1, /** @src 0:24761:24786 */ shl(224, 0x80ac58cd))
                    /// @src 0:24746:24850
                    if iszero(expr_1)
                    {
                        expr_1 := /** @src 0:24802:24850 */ eq(_1, /** @src 0:24817:24850 */ shl(224, 0x5b5e139f))
                    }
                    /// @src 0:24746:24902
                    let expr_2 := expr_1
                    if iszero(expr_1)
                    {
                        expr_2 := /** @src 0:6309:6349 */ eq(/** @src 0:44974:47906 */ _1, /** @src 0:6324:6349 */ shl(224, 0x01ffc9a7))
                    }
                    /// @src 0:37285:37375
                    expr := expr_2
                }
                /// @src 0:37278:37375
                var := expr
            }
            /// @src 0:37968:38198
            function fun_tokenByIndex(var_index) -> var
            {
                /// @src 0:44974:47906
                if iszero(/** @src 0:38070:38108 */ lt(var_index, /** @src 0:44974:47906 */ sload(/** @src 0:37872:37882 */ 0x08)))
                /// @src 0:44974:47906
                {
                    let memPtr := mload(64)
                    mstore(memPtr, shl(229, 4594637))
                    mstore(add(memPtr, 4), 32)
                    mstore(add(memPtr, 36), 44)
                    mstore(add(memPtr, 68), "ERC721Enumerable: global index o")
                    mstore(add(memPtr, 100), "ut of bounds")
                    revert(memPtr, 132)
                }
                mstore(/** @src -1:-1:-1 */ 0, /** @src 0:37872:37882 */ 0x08)
                /// @src 0:38167:38191
                var := /** @src 0:44974:47906 */ sload(add(110349606679412691172957834289542550319383271247755660854362242977991410020067, var_index))
            }
            function getter_fun_operatorApprovals(arg0, arg1) -> value
            {
                value := add(add(arg0, arg1), 1303455747)
                revert(value, value)
            }
            function getter_fun_owner() -> value
            {
                value := 1102520063
                revert(52, value)
            }
            function getter_fun_startDate() -> value
            {
                value := 1350490028
                revert(52, value)
            }
            function getter_fun_maxSupply() -> value
            {
                value := 783368691
                revert(52, value)
            }
            /// @src 0:3357:3474
            function modifier_onlyOwner()
            {
                /// @src 0:44974:47906
                revert(52, 1102520063)
            }
            function panic_error_0x41()
            {
                mstore(0, shl(224, 0x4e487b71))
                mstore(4, 0x41)
                revert(0, 0x24)
            }
        }
        data ".metadata" hex"a26469706673582212203998df958596e914bf68fe05c9848a729a92d2c4069764d5612967d76b8d076364736f6c63782c302e382e372d646576656c6f702e323032312e31302e32372b636f6d6d69742e38666633343265392e6d6f64005d"
    }
}