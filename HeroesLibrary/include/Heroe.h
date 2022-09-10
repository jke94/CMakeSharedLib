namespace heroeslibrary
{
    class Heroe
    {
        private:
            int force;
            int flexibility;
            int courage;
            int loyalty;

        public:
            Heroe(int force, int flexibility, int courage, int loyalty);
            ~Heroe();

            bool setForce(int force);
            int getForce();
            bool setFlexibility(int flexibility);
            int getFlexibility();
            bool setCourage(int courage);
            int getCourage();
            bool setLoyalty(int loyalty);
            int getLoyalty();

            virtual double getRanking() = 0;
    };

    class Batman : public Heroe
    {
        private:

        public:
            Batman(int force, int flexibility, int courage, int loyalty);
            ~Batman();
            double getRanking();
    };
    
    class Superman : public Heroe
    {
        private:
            /* data */
        public:
            Superman(int force, int flexibility, int courage, int loyalty);
            ~Superman();
            double getRanking();
    };
}