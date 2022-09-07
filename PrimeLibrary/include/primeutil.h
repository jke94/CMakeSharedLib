#ifndef PRIMEUTIL_H
#define PRIMEUTIL_H

#include <vector>
#include <algorithm>

namespace prime_util
{
    class PrimeUtil
    {

    public:
        PrimeUtil();
        ~PrimeUtil();

        bool is_dummy(bool value);
        bool is_dummy_negated(bool value);
    };
}

#endif // PRIMEUTIL_H