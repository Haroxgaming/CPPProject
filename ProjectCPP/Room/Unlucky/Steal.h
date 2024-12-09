#pragma once
#include "../Room.h"

class Steal : public Room
{
public:
    void setRoomLuck();
    int roomEffect(Player& target);
};
