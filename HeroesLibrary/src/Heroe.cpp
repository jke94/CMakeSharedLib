#include "Heroe.h"
namespace heroeslibrary
{       
    Heroe::~Heroe()
    {
    }

    int Heroe::getForce()
    {
        return force;
    }

    int Heroe::getFlexibility()
    {
        return flexibility;
    }
    
    int Heroe::getCourage()
    {
        return courage;
    }

    int Heroe::getLoyalty()
    {
        return loyalty;
    }

    void Heroe::toString()
    {
        std::cout << "Summary..." << std::endl
            << "Force: " << force << std::endl
            << "Flexibility: " << flexibility << std::endl
            << "Courage: " << courage << std::endl
            << "Loyalty: " << loyalty << std::endl;
    }
}