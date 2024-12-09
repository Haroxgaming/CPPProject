#include "RestZone.h"

void RestZone::setRoomLuck()
{
    roomLuck = RoomType::lucky;
}

int RestZone::rest(Player& target)
{
    target.setSpellNumber(target.getSpellNumber() + 1);
}
