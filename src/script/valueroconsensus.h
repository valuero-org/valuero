// Copyright (c)  The Bitcoin Core developers
// Copyright (c) 2017-2019 The Raven Core developers
// Copyright (c) 2018-2019 The Rito Core developers
// Copyright (c) 2019 The Valuero developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef VAL_VALCONSENSUS_H
#define VAL_VALCONSENSUS_H

#include <stdint.h>

#if defined(BUILD_VAL_INTERNAL) && defined(HAVE_CONFIG_H)
#include "config/valuero-config.h"
  #if defined(_WIN32)
    #if defined(DLL_EXPORT)
      #if defined(HAVE_FUNC_ATTRIBUTE_DLLEXPORT)
        #define EXPORT_SYMBOL __declspec(dllexport)
      #else
        #define EXPORT_SYMBOL
      #endif
    #endif
  #elif defined(HAVE_FUNC_ATTRIBUTE_VISIBILITY)
    #define EXPORT_SYMBOL __attribute__ ((visibility ("default")))
  #endif
#elif defined(MSC_VER) && !defined(STATIC_LIBVALCONSENSUS)
  #define EXPORT_SYMBOL __declspec(dllimport)
#endif

#ifndef EXPORT_SYMBOL
  #define EXPORT_SYMBOL
#endif

#ifdef __cplusplus
extern "C" {
#endif

#define VALCONSENSUS_API_VER 1

typedef enum valueroconsensus_error_t
{
    valueroconsensus_ERR_OK = 0,
    valueroconsensus_ERR_TX_INDEX,
    valueroconsensus_ERR_TX_SIZE_MISMATCH,
    valueroconsensus_ERR_TX_DESERIALIZE,
    valueroconsensus_ERR_AMOUNT_REQUIRED,
    valueroconsensus_ERR_INVALID_FLAGS,
} valueroconsensus_error;

/** Script verification flags */
enum
{
    valueroconsensus_SCRIPT_FLAGS_VERIFY_NONE                = 0,
    valueroconsensus_SCRIPT_FLAGS_VERIFY_P2SH                = (1U << 0), // evaluate P2SH (BIP16) subscripts
    valueroconsensus_SCRIPT_FLAGS_VERIFY_DERSIG              = (1U << 2), // enforce strict DER (BIP66) compliance
    valueroconsensus_SCRIPT_FLAGS_VERIFY_NULLDUMMY           = (1U << 4), // enforce NULLDUMMY (BIP147)
    valueroconsensus_SCRIPT_FLAGS_VERIFY_CHECKLOCKTIMEVERIFY = (1U << 9), // enable CHECKLOCKTIMEVERIFY (BIP65)
    valueroconsensus_SCRIPT_FLAGS_VERIFY_CHECKSEQUENCEVERIFY = (1U << 10), // enable CHECKSEQUENCEVERIFY (BIP112)
    valueroconsensus_SCRIPT_FLAGS_VERIFY_WITNESS             = (1U << 11), // enable WITNESS (BIP141)
    valueroconsensus_SCRIPT_FLAGS_VERIFY_ALL                 = valueroconsensus_SCRIPT_FLAGS_VERIFY_P2SH | valueroconsensus_SCRIPT_FLAGS_VERIFY_DERSIG |
                                                               valueroconsensus_SCRIPT_FLAGS_VERIFY_NULLDUMMY | valueroconsensus_SCRIPT_FLAGS_VERIFY_CHECKLOCKTIMEVERIFY |
                                                               valueroconsensus_SCRIPT_FLAGS_VERIFY_CHECKSEQUENCEVERIFY | valueroconsensus_SCRIPT_FLAGS_VERIFY_WITNESS
};

/// Returns 1 if the input nIn of the serialized transaction pointed to by
/// txTo correctly spends the scriptPubKey pointed to by scriptPubKey under
/// the additional constraints specified by flags.
/// If not nullptr, err will contain an error/success code for the operation
EXPORT_SYMBOL int valueroconsensus_verify_script(const unsigned char *scriptPubKey, unsigned int scriptPubKeyLen,
                                                 const unsigned char *txTo        , unsigned int txToLen,
                                                 unsigned int nIn, unsigned int flags, valueroconsensus_error* err);

EXPORT_SYMBOL int valueroconsensus_verify_script_with_amount(const unsigned char *scriptPubKey, unsigned int scriptPubKeyLen, int64_t amount,
                                    const unsigned char *txTo        , unsigned int txToLen,
                                    unsigned int nIn, unsigned int flags, valueroconsensus_error* err);

EXPORT_SYMBOL unsigned int valueroconsensus_version();

#ifdef __cplusplus
} // extern "C"
#endif

#undef EXPORT_SYMBOL

#endif // VAL_VALCONSENSUS_H
