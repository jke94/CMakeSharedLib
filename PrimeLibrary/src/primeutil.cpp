#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

#include "primeutil.h"

namespace prime_util
{
    PrimeUtil::PrimeUtil()
    {
    }

    PrimeUtil::~PrimeUtil()
    {
    }

    bool PrimeUtil::is_dummy(bool value)
    {
        return value;
    }
    bool PrimeUtil::is_dummy_negated(bool value)
    {
        return !value;
    }
}