#pragma once
#include <iostream>
#include <string>
#include "Player.h"

class Spell {
    
protected:
    int Dammage;
    int Heal;

public:
    Spell();
    virtual void utiliser(Player& target); 
};


