#pragma once
#include "../Room.h"

class RestZone : public Room
{
public:
    void setRoomLuck();
    int rest(Player& target);
};
