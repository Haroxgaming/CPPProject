#pragma once

#include <random>

enum class RoomType
{
    lucky,
    Unlucky,
    Normal
};

class Room
{
private:
    RoomType roomLuck;
public:

    void setRoomLuck();
};
