#include "Shop.h"

int Shop::roomEffect()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 14);
    int objet = dis(gen);
    return objet;
}
