#pragma once

#include "../Room.h"

class RestZone : public Room
{
public:
    virtual int roomEffect(Player& target);
};
