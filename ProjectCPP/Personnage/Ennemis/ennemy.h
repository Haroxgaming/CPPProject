#pragma once
#include "../Player.h"

class ennemy : public Character
{
public:
    
    virtual void attack(Player& target, bool crit);
    
};
