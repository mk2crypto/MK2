// Copyright (c) 2020 The MK2X developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef MK2X_LEGACY_ZPOS_H
#define MK2X_LEGACY_ZPOS_H

#include "stakeinput.h"
#include "main.h"
#include "txdb.h"

class CLegacyZMk2Stake : public CStakeInput
{
private:
    uint32_t nChecksum;
    libzerocoin::CoinDenomination denom;
    uint256 hashSerial;

public:
    CLegacyZMk2Stake() {}

    explicit CLegacyZMk2Stake(const libzerocoin::CoinSpend& spend);
    bool InitFromTxIn(const CTxIn& txin) override;
    bool IsZMK2() const override { return true; }
    uint32_t GetChecksum() const { return nChecksum; }
    CBlockIndex* GetIndexFrom() override;
    CAmount GetValue() const override;
    CDataStream GetUniqueness() const override;
    bool CreateTxIn(CWallet* pwallet, CTxIn& txIn, uint256 hashTxOut = UINT256_ZERO) override { return false; /* creation disabled */}
    bool CreateTxOuts(CWallet* pwallet, std::vector<CTxOut>& vout, CAmount nTotal) override { return false; /* creation disabled */}
    bool GetTxFrom(CTransaction& tx) const override { return false; /* not available */ }
    bool GetTxOutFrom(CTxOut& out) const override { return false; /* not available */ }
    virtual bool ContextCheck(int nHeight, uint32_t nTime) override;
};

#endif //MK2X_LEGACY_ZPOS_H
