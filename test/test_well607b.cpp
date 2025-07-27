/* test_well607b.cpp
 *
 * Copyright Sergiu Deitsch 2025
 *
 * Distributed under the Boost Software License, Version 1.0. (See
 * accompanying file LICENSE_1_0.txt or copy at
 * http://www.boost.org/LICENSE_1_0.txt)
 */

#include <boost/random/well.hpp>

#define BOOST_RANDOM_URNG boost::random::well607b

#define BOOST_RANDOM_SEED_WORDS 19

#define BOOST_RANDOM_VALIDATION_VALUE 1594184662U
#define BOOST_RANDOM_SEED_SEQ_VALIDATION_VALUE 2649171206U

#include "test_generator.ipp"
