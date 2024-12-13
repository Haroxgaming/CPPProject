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
    std::string nom;
    bool ATKBuff = false;
    int inventory [5];
    int gold;
    int spellNumber;
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
    
    virtual void setATKBuff(bool buff);
    virtual bool getATKBuff();

    virtual void setGold(int money);
    virtual int getGold();

    virtual void setSpellNumber(int spell);
    virtual int getSpellNumber();

    virtual void attack(Character& target, bool crit);
    virtual void rollDice (Character& target);
};
