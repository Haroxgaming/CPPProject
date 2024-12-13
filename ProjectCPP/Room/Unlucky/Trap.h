#pragma once

#include "../Room.h"

class Trap : public Room
{
public:
    virtual int roomEffect(Player& target);
};
