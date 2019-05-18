// Copyright (c)  The Bitcoin Core developers
// Copyright (c) 2017-2019 The Raven Core developers
// Copyright (c) 2018-2019 The Rito Core developers
// Copyright (c) 2019 The Valuero developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef VAL_QT_VALADDRESSVALIDATOR_H
#define VAL_QT_VALADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class ValueroAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit ValueroAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Valuero address widget validator, checks for a valid valuero address.
 */
class ValueroAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit ValueroAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // VAL_QT_VALADDRESSVALIDATOR_H
