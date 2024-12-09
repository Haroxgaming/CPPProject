﻿#pragma once
#include "../Player.h"
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
    int LuckLevel;
protected:
    RoomType roomLuck;
public:

    Room();
    virtual void setRoomLuck(RoomType roomWish);
    RoomType getRoomLuck();
};
