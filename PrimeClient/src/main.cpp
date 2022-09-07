#include <iostream>
#include <math.h>

#include <primeutil.h>

int main(int argc, char **argv)
{
    bool valueA = true;
    bool valueB = false;

    prime_util::PrimeUtil primeUtil;

    std::cout << "valueA = " << valueA
        << ", is_dummy(): " << primeUtil.is_dummy(valueA) <<std::endl;
    std::cout << "valueB = " << valueB 
        << ", is_dummy(): " << primeUtil.is_dummy_negated(valueB) <<std::endl;

    return 0;
}