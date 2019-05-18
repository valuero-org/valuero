// Copyright (c) 2017 The Bitcoin Core developers
// Copyright (c) 2017-2019 The Raven Core developers
// Copyright (c) 2018-2019 The Rito Core developers
// Copyright (c) 2019 The Valuero developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#include "univalue.h"

int main (int argc, char *argv[])
{
    char buf[] = "___[1,2,3]___";
    UniValue val;
    return val.read(buf + 3, 7) ? 0 : 1;
}