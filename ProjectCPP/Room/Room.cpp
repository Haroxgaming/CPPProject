#include "Room.h"
#include <random>

Room::Room()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 4);
    int luckLevel = dis(gen);
    switch (luckLevel)
    {
    case 0:
        roomLuck = RoomType::lucky;
        break;
    case 1:
        roomLuck = RoomType::Unlucky;
        break;
    default:
        roomLuck = RoomType::Normal;
    }
}

void Room::setRoomLuck()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 4);
    int luckLevel = dis(gen);
    switch (luckLevel)
    {
    case 0:
        roomLuck = RoomType::lucky;
        break;
    case 1:
        roomLuck = RoomType::Unlucky;
        break;
    default:
        roomLuck = RoomType::Normal;
    }
}

RoomType Room::getRoomLuck()
{
    return roomLuck;
}

