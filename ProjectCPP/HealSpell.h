#pragma once
#include "Spell.h"


class HealSpell : public Spell
{
private:
    int Heal;

public:
    
    HealSpell();
    void utiliser(Player& target);
    
};
