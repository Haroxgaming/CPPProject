#include "EpeeForge.h"

EpeeForge::EpeeForge()
{
    quantite = 1;
    name = "Epée forgé";
    effets = "Passe l'attaque du joueur a 1D10";
}

void EpeeForge::utiliser(Character& target)
{
    target.setDegats(10);
}
