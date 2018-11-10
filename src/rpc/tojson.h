// Copyright (c) 2017 The Bitcoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_RPCTOJSON_H
#define BITCOIN_RPCTOJSON_H

#include "uint256.h"

#include <univalue.h>

class CScript;

void ScriptPubKeyToJSON(const Config &config, const CScript &scriptPubKey,
                        UniValue &out, bool fIncludeHex);
void TxToJSON(const Config &config, const CTransaction &tx,
              const uint256 hashBlock, UniValue &entry);
UniValue blockToJSON(const Config &config, const CBlock &block,
                     const CBlockIndex *blockindex, bool txDetails = false);
UniValue blockheaderToJSON(const Config &config, const CBlockIndex *blockindex);

#endif // BITCOIN_RPCTOJSON_H
