#include "Trap.h"

void Trap::setRoomLuck()
{
    roomLuck = RoomType::Unlucky;
}

int Trap::roomEffect(Player& target)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 8);
    int damage = dis(gen);
    target.setPointDeVie(target.getPointDeVie() - damage);
    checkEndGame(target);
}
