#pragma once

#include <string>
#include <random>
#include <iostream>

class Character
{
private:
    int Health;
    int pvMax;
    int attack;
    int armorClass;
public:
    Character();
    
    void setHealth(int HP);
    int getHealth();

    void SetPVMax(int AddMax);
    int getPVMax();

    void setAttack(int ATK);
    int getAttack();

    void setArmorClass(int armor);
    int getArmorClass();
};
