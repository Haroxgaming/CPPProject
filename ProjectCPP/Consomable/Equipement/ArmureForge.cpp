#include "ArmureForge.h"

ArmureForge::ArmureForge()
{
    quantite = 1;
    name = "Epée forgé";
    effets = "Passe l'attaque du joueur a 1D10";
}

void ArmureForge::utiliser(Player& target)
{
    target.setarmor(11);
}
