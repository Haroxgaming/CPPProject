#include "EnnemisRoom.h"

int EnnemisRoom::roomEffect()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 2);
    int ennemis = dis(gen);
    return ennemis;
}
