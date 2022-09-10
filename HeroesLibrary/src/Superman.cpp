#include "Heroe.h"

namespace heroeslibrary
{    
    Superman::~Superman()
    {
    }

    double Superman::getRanking()
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
