// Copyright (c) 2018-2019 The Bitcoin Core developers
// Copyright (c) 2017-2019 The Raven Core developers
// Copyright (c) 2018-2019 The Rito Core developers
// Copyright (c) 2019 The Valuero developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "assettypes.h"

int IntFromAssetType(AssetType type) {
    return (int)type;
}

AssetType AssetTypeFromInt(int nType) {
    return (AssetType)nType;
}
