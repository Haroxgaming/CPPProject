#include "Conssomable.h"

void Consommable::afficherInfo() const
{
    std::cout << "Nom : " << name << "     Effet : " << effets 
              << "     Quantité : " << quantite << std::endl;
}

