#include "Heroe.h"

namespace heroeslibrary
{    
    Superman:: Superman(int force, int flexibility, int courage, int loyalty):
        Heroe(force, flexibility, courage, loyalty)
    {
        force = force;
        flexibility = flexibility;
        courage = courage;
        loyalty = loyalty;
    }
    
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
