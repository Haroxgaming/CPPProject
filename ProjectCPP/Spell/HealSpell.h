#pragma once
#include "Spell.h"


class HealSpell : public Spell
{
public:
    
    HealSpell();
    void utiliser(Player& target);
    
};
