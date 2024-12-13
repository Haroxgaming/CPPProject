#pragma once

#include <string>
#include <random>
#include <iostream>

class Character
{
protected:
    int Health;
    int pvMax;
    int Degats;
    int armorClass;
public:
    Character();
    
    void setHealth(int HP);
    int getHealth();

    void SetPVMax(int AddMax);
    int getPVMax();

    void setDegats(int ATK);
    int getDegats();

    void setArmorClass(int armor);
    int getArmorClass();

    virtual void attack(Character& target, bool crit);
    virtual void rollDice (Character& target);
};
