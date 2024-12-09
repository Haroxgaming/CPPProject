#pragma once
#include "Spell.h"


class Meteor : public Spell
{
private:
    int Dammage;

public:
    
    Meteor();
    void utiliser(ennemy& target);
    
};
