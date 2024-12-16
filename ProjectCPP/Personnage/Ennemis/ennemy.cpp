#include "ennemy.h"



void ennemy::attack(Character& target, bool crit)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, Degats);
    int damage = dis(gen);
    if (crit)
    {
        target.setHealth(target.getHealth()-(damage+Degats));
        std::cout<<"PV restant :"<<target.getHealth()<<std::endl;
        Sleep(2000);
        system("cls");
        target.chekEndGame();
    }
    else
    {
        target.setHealth(target.getHealth()-damage);
        std::cout<<"PV restant :"<<target.getHealth()<<std::endl;
        Sleep(2000);
        system("cls");
        target.chekEndGame();
    }
}
