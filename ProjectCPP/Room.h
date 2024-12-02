#pragma once

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

    Room();
    void setRoomLuck();
    RoomType getRoomLuck();
};
