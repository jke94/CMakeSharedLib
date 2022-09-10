#include <iostream>
#include <Heroe.h>

int main(int argc, char **argv)
{
    heroeslibrary::Batman heroe_batman(50,20,30,40);
    heroeslibrary::Superman heroe_superman(60,30,80,70);

    std::cout << "Batman: | Ranking: " << heroe_batman.getRanking() <<std::endl;
    std::cout << "Superman | Ranking: " << heroe_batman.getRanking() <<std::endl;

    return 0;
}