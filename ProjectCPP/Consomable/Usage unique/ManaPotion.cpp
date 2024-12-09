#include "ManaPotion.h"

ManaPotion::ManaPotion()
{
    quantite = 1;
    name = "Mana Potion";
    effets = "Permet de gagner 1 utilisation de sort";
}

void ManaPotion::utiliser(Player& target)
{
    target.setPointDeVie(target.getPointDeVie()+1);
}
