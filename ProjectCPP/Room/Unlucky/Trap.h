#pragma once
#include "../Room.h"

class Trap : public Room
{
public:
    int roomEffect(Player& target);
};
