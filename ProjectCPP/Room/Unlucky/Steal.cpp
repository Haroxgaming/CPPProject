#include "Steal.h"

void Steal::setRoomLuck()
{
    roomLuck = RoomType::Unlucky;
}

int Steal::roomEffect(Player& target)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 20);
    int stealed = dis(gen);
    target.setGold(target.getGold() - stealed);
}
