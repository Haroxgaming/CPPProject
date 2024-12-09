#include "EpeeMitril.h"

EpeeMitril::EpeeMitril()
{
    quantite = 1;
    name = "Epée en mitril";
    effets = "Passe l'attaque du joueur a 1D12";
}

void EpeeMitril::utiliser(Player& target)
{
    target.setAttaque(12);
}
