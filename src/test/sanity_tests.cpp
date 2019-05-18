// Copyright (c) 2015-2018 The Bitcoin Core developers
// Copyright (c) 2017-2019 The Raven Core developers
// Copyright (c) 2018-2019 The Rito Core developers
// Copyright (c) 2019 The Valuero developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "compat/sanity.h"
#include "key.h"
#include "test/test_valuero.h"

#include <boost/test/unit_test.hpp>

BOOST_FIXTURE_TEST_SUITE(sanity_tests, BasicTestingSetup)

    BOOST_AUTO_TEST_CASE(basic_sanity_test)
    {
        BOOST_TEST_MESSAGE("Running Basic Sanity Test");

        BOOST_CHECK_MESSAGE(glibc_sanity_test() == true, "libc sanity test");
        BOOST_CHECK_MESSAGE(glibcxx_sanity_test() == true, "stdlib sanity test");
        BOOST_CHECK_MESSAGE(ECC_InitSanityCheck() == true, "openssl ECC test");
    }

BOOST_AUTO_TEST_SUITE_END()
