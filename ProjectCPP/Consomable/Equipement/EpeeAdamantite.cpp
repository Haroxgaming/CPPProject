#include "EpeeAdamantite.h"

EpeeAdamantite::EpeeAdamantite()
{
    quantite = 1;
    name = "Epée en adamantite";
    effets = "Passe l'attaque du joueur a 1D20";
}

void EpeeAdamantite::utiliser(Player& target)
{
    target.setAttaque(20);
}
