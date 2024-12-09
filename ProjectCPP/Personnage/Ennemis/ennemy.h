#pragma once
#include "../Character.h"

class ennemy
{
public:
    
private :
    int ArmorClass;
protected :
    int attaque;
public:
    
    
    // Constructeur//
    
    ennemy();
    // const std::string& nom, int Health, int ArmorClass,int attaque,int des)
    //     : Health(Health), ArmorClass(ArmorClass), attaque(attaque),des(des){}

    void ennemyAttaque(Character& target);
    bool ennemydes(Character& target);
    
    
};
