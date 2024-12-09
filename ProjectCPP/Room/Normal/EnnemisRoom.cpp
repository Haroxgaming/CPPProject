#include "EnnemisRoom.h"

#include "../../Goblin.h"
#include "../../Kobolt.h"

ennemy EnnemisRoom::roomEffect()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 1);
    int ennemyChoose = dis(gen);
    if (ennemyChoose = 0)
    {
        Goblin G1;
        return G1;
    }
    else
    {
        Kobolt K1;
        return K1;
    }
}
