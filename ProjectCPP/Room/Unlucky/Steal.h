#pragma once

#include "../Room.h"

class Steal : public Room
{
public:
    virtual int roomEffect(Player& target);
};
