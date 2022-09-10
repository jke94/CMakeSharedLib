#include "Heroe.h"

namespace heroeslibrary
{   
    Heroe::Heroe(
        int force, 
        int flexibility, 
        int courage,
        int loyalty)
    {
        force = force;
        flexibility = flexibility;
        courage = courage;
        loyalty = loyalty;
    }
    
    Heroe::~Heroe()
    {
    }

    bool Heroe::setForce(int force)
    {
        if(0 <= force && force <= 100)
        {
            force = force;
            return true;
        }
        return false;
    }

    int Heroe::getForce()
    {
        return force;
    }

    bool Heroe::setFlexibility(int flexibility)
    {
        if(0 <= flexibility && flexibility <= 100)
        {
            flexibility = flexibility;
            return true;
        }
        return false;
    }

    int Heroe::getFlexibility()
    {
        return flexibility;
    }

    bool Heroe::setCourage(int courage)
    {
        if(0 <= courage && courage <= 100)
        {
            courage = courage;
            return true;
        }
        return false;
    }
    
    int Heroe::getCourage()
    {
        return courage;
    }

    bool Heroe::setLoyalty(int loyalty)
    {
        if(0 <= loyalty && loyalty <= 100)
        {
            loyalty = loyalty;
            return true;
        }
        return false;
    }
    int Heroe::getLoyalty()
    {
        return loyalty;
    }
}