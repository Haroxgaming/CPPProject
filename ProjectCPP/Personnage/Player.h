#pragma once
#include "Character.h"

class Player : public Character
{
private:
    

public:
    
                            // Constructeur//
    Player();    
    Player(const std::string& name);

    virtual void setATKBuff(bool buff);
    virtual bool getATKBuff();

    virtual void setGold(int money);
    virtual int getGold();

    virtual void setSpellNumber(int spell);
    virtual int getSpellNumber();

    virtual void checkEndGame();
    virtual void attack(Character& target, bool crit);
    virtual void rollDice (Character& target);
    void Heal();
    void fireBall(Character& target);
};
