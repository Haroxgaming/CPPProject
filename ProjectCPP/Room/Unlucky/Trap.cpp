#include "Trap.h"


int Trap::roomEffect(Player& target)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 8);
    int damage = dis(gen);
    target.setHealth(target.getHealth() - damage);
    std::cout<<"Vous venez de perdre "<< damage << "PV!!!"<<std::endl;
    target.checkEndGame();
    return 0;
}
