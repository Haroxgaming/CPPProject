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

public:
    
                            // Constructeur//
    
    Player(const std::string& nom, int pointsDeVie, int attaque, int defense)
        : nom(nom), pointsDeVie(pointsDeVie), attaque(attaque), armure(defense) {}


    void attack(ennemy& target);
    
};
