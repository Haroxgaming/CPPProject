﻿#include "Room.h"


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

void Room::setRoomLuck(RoomType roomWish)
{
    roomLuck = roomWish;
}

RoomType Room::getRoomLuck()
{
    return roomLuck;
}

void Room::checkEndGame(Player& player)
{
    if (player.getPointDeVie() == 0)
    {
        std::cout<<"fin de partie vous êtes mort!"<<std::endl;
    }
}