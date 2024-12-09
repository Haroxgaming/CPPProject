#pragma once
#include "../Room.h"

class Trap : public Room
{
public:
    void setRoomLuck();
    int roomEffect(Player& target);
};
