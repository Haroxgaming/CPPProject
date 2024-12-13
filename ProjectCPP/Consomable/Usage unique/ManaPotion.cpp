#include "ManaPotion.h"

ManaPotion::ManaPotion()
{
    quantite = 1;
    name = "Mana Potion";
    effets = "Permet de gagner 1 utilisation de sort";
}

void ManaPotion::utiliser(Character& target)
{
    target.setHealth(target.getHealth()+1);
}
