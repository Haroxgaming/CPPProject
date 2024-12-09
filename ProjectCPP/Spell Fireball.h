#pragma once
#include "Spell.h"


class SpellFireball : public Spell
{
private:
    int Dammage;

public:
    
    SpellFireball();
    void utiliser(ennemy& target);
    
};
