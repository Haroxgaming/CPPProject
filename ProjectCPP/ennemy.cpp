#include "ennemy.h"
#include <iostream>
#include <random>
#include "Player.h"


void ennemy::setHealth(int hp)
{
    if (hp <= 0)
    {
        Health = 1;
    }
    else
    {
        Health = hp;
    }
}
int ennemy::getHealth()
{
    return Health;
}
void ennemy::setArmorClass(int Am)
{
    if (Am <= 0)
    {
        ArmorClass = 1;
    }
    else
    {
        ArmorClass = Am;
    }
}
int ennemy::getArmorClass()
{
    return ArmorClass;
}
void ennemy::setattaque(int ataq)
{
    if (ataq <= 0)
    {
        attaque = 1;
    }
    else
    {
        attaque = ataq;
    }
    
}
int ennemy::getataque()
{
    return attaque;
}


ennemy::ennemy()
{
    
}

void ennemy::ennemyAttaque(Player& target)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, attaque);
    
}




void ennemy::ennemydes(Player& target)
{
 bool Superieur = false;
    class PLayer;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 20);
    int de = dis(gen);
    
    if (de > target.getarmor())
    {
        Superieur = true;
        ennemyAttaque(target);
        std::cout << "L'ennemi a fait " << attaque << " dégâts au joueur!" << std::endl;
    }
    else
    {
        Superieur = false;
        std::cout << "L'ennemi a raté son attaque" << std::endl;
    }
    
    
}
