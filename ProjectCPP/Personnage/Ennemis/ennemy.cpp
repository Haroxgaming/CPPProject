#include "ennemy.h"

void ennemy::attack(Player& target, bool crit)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, Degats);
    int damage = dis(gen);
    if (crit)
    {
        target.setHealth(target.getHealth()-(damage+Degats));
        target.checkEndGame();
    }
    else
    {
        target.setHealth(target.getHealth()-damage);
        target.checkEndGame();
    }
}
