#include "Heroe.h"

namespace heroeslibrary
{
    Batman::~Batman()
    {
    }

    double Batman::getRanking()
    {
        double ranking = (
            getForce() +
            getFlexibility() + 
            getCourage() +
            getLoyalty()
        )/4;

        return ranking;
    }
} // namespace heroeslibrary
