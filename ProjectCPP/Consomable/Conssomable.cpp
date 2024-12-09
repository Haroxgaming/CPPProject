#include "Conssomable.h"

Consommable::Consommable()
{
    name = "Default";
    effets = "Default";
    quantite = 1;
}

void Consommable::afficherInfo() const
{
    std::cout << "Nom : " << name << "     Effet : " << effets << "     Quantité : " << quantite << std::endl;
}

