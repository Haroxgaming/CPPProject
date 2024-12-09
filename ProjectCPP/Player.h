#pragma once
#include <string>
#include "ennemy.h"
#include <random>

class Player
{
private:
    std::string nom;
    int pointsDeVie;
    int pvMax;
    int attaque;
    bool ATKBuff = false;
    int armure;
    int inventory [5];
    int gold;
    int spellNumber;

public:
    
                            // Constructeur//
    Player();    
    Player(const std::string& name);

    void setATKBuff(bool buff);
    bool getATKBuff();

    void setPVMax(int AddHP);
    int getPVMax();
    
    void attack(ennemy& target);

    void setarmor(int armor);
    int getarmor();

    void setPointDeVie(int vie);
    int getPointDeVie();

    void setAttaque(int attack);
    int getAttaque();

    void setGold(int money);
    int getGold();

    void setSpellNumber(int spell);
    int getSpellNumber();

    void checkEndGame();
    
};
