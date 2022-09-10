#ifndef HEROES_H
#define HEROES_H

#include <iostream>

namespace heroeslibrary
{
    class Heroe
    {
        private:
            int force{};
            int flexibility{};
            int courage{};
            int loyalty{};

        public:
            Heroe(int force, int flexibility, int courage, int loyalty):
                force{force}, flexibility{flexibility}, courage{courage}, loyalty{loyalty}{};
            ~Heroe();

            int getForce();
            int getFlexibility();
            int getCourage();
            int getLoyalty();
            void toString();

            virtual double getRanking() = 0;
    };

    class Batman : public Heroe
    {
        private:

        public:
            Batman(int force, int flexibility, int courage, int loyalty):
            Heroe(force, flexibility, courage, loyalty){}
            ~Batman();

            double getRanking();
    };
    
    class Superman : public Heroe
    {
        private:
            /* data */
        public:
            Superman(int force, int flexibility, int courage, int loyalty):
            Heroe(force, flexibility, courage, loyalty){}
            ~Superman();

            double getRanking();
    };
}

#endif // HEROES_H