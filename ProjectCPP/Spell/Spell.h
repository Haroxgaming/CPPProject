#pragma once
#include "../Personnage/Player.h"

class Spell {
    
protected:
    int Dammage;
    int Heal;

public:
    Spell();

    void healing(Player& player, Character& target);
    void attack(Player& player, Character& target);
};


