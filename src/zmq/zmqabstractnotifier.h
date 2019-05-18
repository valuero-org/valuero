// Copyright (c) 2014-2019 The Bitcoin Core developers
// Copyright (c) 2017-2019 The Raven Core developers
// Copyright (c) 2018-2019 The Rito Core developers
// Copyright (c) 2019 The Valuero developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef VAL_ZMQ_ZMQABSTRACTNOTIFIER_H
#define VAL_ZMQ_ZMQABSTRACTNOTIFIER_H

#include "zmqconfig.h"

class CBlockIndex;
class CZMQAbstractNotifier;

typedef CZMQAbstractNotifier* (*CZMQNotifierFactory)();

class CZMQAbstractNotifier
{
public:
    CZMQAbstractNotifier() : psocket(nullptr) { }
    virtual ~CZMQAbstractNotifier();

    template <typename T>
    static CZMQAbstractNotifier* Create()
    {
        return new T();
    }

    std::string GetType() const { return type; }
    void SetType(const std::string &t) { type = t; }
    std::string GetAddress() const { return address; }
    void SetAddress(const std::string &a) { address = a; }

    virtual bool Initialize(void *pcontext) = 0;
    virtual void Shutdown() = 0;

    virtual bool NotifyBlock(const CBlockIndex *pindex);
    virtual bool NotifyTransaction(const CTransaction &transaction);

protected:
    void *psocket;
    std::string type;
    std::string address;
};

#endif // VAL_ZMQ_ZMQABSTRACTNOTIFIER_H
