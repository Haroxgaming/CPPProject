#pragma once
#include <string>
#include "ennemy.h"
#include <iostream>

class Player
{
private:
    std::string nom;
    int pointsDeVie;
    int attaque;
    int armure;
    int inventory [5];
    int gold;
    int spellNumber;

public:
    
                            // Constructeur//
    
    Player(const std::string& nom, int pointsDeVie, int attaque, int defense)
        : nom(nom), pointsDeVie(pointsDeVie), attaque(attaque), armure(defense) {}


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
    
};
