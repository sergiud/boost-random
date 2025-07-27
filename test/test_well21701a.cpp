/* test_well21701a.cpp
 *
 * Copyright Sergiu Deitsch 2025
 *
 * Distributed under the Boost Software License, Version 1.0. (See
 * accompanying file LICENSE_1_0.txt or copy at
 * http://www.boost.org/LICENSE_1_0.txt)
 */

#include <boost/random/well.hpp>

#define BOOST_RANDOM_URNG boost::random::well21701a

#define BOOST_RANDOM_SEED_WORDS 679

#define BOOST_RANDOM_VALIDATION_VALUE 2570575944U
#define BOOST_RANDOM_SEED_SEQ_VALIDATION_VALUE 2134984089U

#include "test_generator.ipp"
