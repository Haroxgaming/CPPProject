#include "ennemy.h"

ennemy::ennemy()
{
    
}

void ennemy::ennemyAttaque(Character& target)
{
    if (ennemydes(target))
    {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(1, attaque);
        int damage = dis(gen);
        target.setHealth(target.getHealth()-damage);
        std::cout << "L'ennemi a fait " << attaque << " dégâts au joueur!" << std::endl;
    }
}




bool ennemy::ennemydes(Character& target)
{
    class PLayer;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 20);
    int de = dis(gen);
    
    if (de > target.getArmorClass())
    {
        return true;
    }
    else
    {
        std::cout << "L'ennemi a raté son attaque" << std::endl;
        return false;
    }
    
    
}
