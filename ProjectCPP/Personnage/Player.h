﻿#pragma once
#include "Character.h"

class Player : public Character
{
private:
    std::string nom;
    bool ATKBuff = false;
    int inventory [5];
    int gold;
    int spellNumber;

public:
    
                            // Constructeur//
    Player();    
    Player(const std::string& name);

    void setATKBuff(bool buff);
    bool getATKBuff();
    
    void attack(Character& target);

    void setGold(int money);
    int getGold();

    void setSpellNumber(int spell);
    int getSpellNumber();

    void checkEndGame();
    
};
