#pragma once

#include "hedera-transaction.h"
#include "hedera-id.h"

#ifdef __cplusplus
extern "C" {
#endif

extern HederaTransaction* hedera_transaction__file_update__new(HederaClient*, HederaFileId id);

extern void hedera_transaction__file_update__set_key(HederaTransaction*, HederaPublicKey key);

extern void hedera_transaction__file_update__set_contents(HederaTransaction*, const uint8_t* contents);

#ifdef __cplusplus
}
#endif