#pragma once

#include "../Room.h"

class Steal : public Room
{
public:
    int roomEffect(Player& target);
};
