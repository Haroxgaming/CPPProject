#pragma once
#include "../Character.h"

class ennemy : public Character
{
public:
    
    virtual void attack(Character& target, bool crit);
    
};
