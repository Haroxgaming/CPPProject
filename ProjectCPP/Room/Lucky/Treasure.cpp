﻿#include "Treasure.h"

int Treasure::roomEffect()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 14);
    int objet = dis(gen);
    return 0;
}
