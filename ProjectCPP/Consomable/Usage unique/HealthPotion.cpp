#include "HealthPotion.h"

HealthPotion::HealthPotion()
{
    quantite = 1;
    name = "Health Potion";
    effets = "Permet de soigner 10pv";
}

void HealthPotion::utiliser(Player& target)
{
    target.setPointDeVie(target.getPointDeVie()+soin);
}

