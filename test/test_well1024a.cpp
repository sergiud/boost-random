/* test_well1024a.cpp
 *
 * Copyright Sergiu Deitsch 2025
 *
 * Distributed under the Boost Software License, Version 1.0. (See
 * accompanying file LICENSE_1_0.txt or copy at
 * http://www.boost.org/LICENSE_1_0.txt)
 */

#include <boost/random/well.hpp>

#define BOOST_RANDOM_URNG boost::random::well1024a

#define BOOST_RANDOM_SEED_WORDS 32

#define BOOST_RANDOM_VALIDATION_VALUE 1573116597U
#define BOOST_RANDOM_SEED_SEQ_VALIDATION_VALUE 1829498590U

#include "test_generator.ipp"
