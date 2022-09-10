#include "Heroe.h"

namespace heroeslibrary
{    
    Batman:: Batman(int force, int flexibility, int courage, int loyalty):
        Heroe(force, flexibility, courage, loyalty)
    {
    }
    
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