#include <iostream>
#include <Heroe.h>

int main(int argc, char **argv)
{
    heroeslibrary::Batman heroe_batman{20,21,85,91};
    heroeslibrary::Superman heroe_superman{60,30,80,70};

    std::cout << "Batman: Getting courage..." << heroe_batman.getCourage() << std::endl;
    std::cout << "Superman: Getting force..." << heroe_batman.getForce() << std::endl;

    std::cout << "Batman: | Ranking: " << heroe_batman.getRanking() <<std::endl;
    std::cout << "Superman | Ranking: " << heroe_superman.getRanking() <<std::endl;

    std::cout << "Batman Summary..." << std::endl;
    heroe_batman.toString();
    std::cout << "Superman Summary..." << std::endl;
    heroe_superman.toString();

    return 0;
}