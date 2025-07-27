/* test_maxeqdist_well23209a.cpp
 *
 * Copyright Sergiu Deitsch 2025
 *
 * Distributed under the Boost Software License, Version 1.0. (See
 * accompanying file LICENSE_1_0.txt or copy at
 * http://www.boost.org/LICENSE_1_0.txt)
 */

#include <boost/random/well.hpp>

#define BOOST_RANDOM_URNG boost::random::maxeqdist_well23209a

#define BOOST_RANDOM_SEED_WORDS 729

#define BOOST_RANDOM_VALIDATION_VALUE 885316705U
#define BOOST_RANDOM_SEED_SEQ_VALIDATION_VALUE 654142934U

#include "test_generator.ipp"
