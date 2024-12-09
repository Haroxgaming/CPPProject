#pragma once
#include <iostream>
#include "Player.h"

class ennemy
{
public:
    
private :
    int Health;
    int ArmorClass;
    int attaque;
    int des;

public:
    void setHealth(int hp);
    int getHealth();
    void setArmorClass(int Am);
    int getArmorClass();
    void setataque(int ataq);
    int getataque();
    void setDes(int des);
    int getDes();
    
    
    // Constructeur//
    
    ennemy(const std::string& nom, int Health, int ArmorClass,int attaque,int des)
        : Health(Health), ArmorClass(ArmorClass), attaque(attaque),des(des){}

    void ennemyAttaque(Player& target);
    void ennemydes(Player& target);
    
    
};
