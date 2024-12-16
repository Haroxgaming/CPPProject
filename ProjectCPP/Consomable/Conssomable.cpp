#include "Conssomable.h"

void Consommable::setName(std::string nom)
{
    name = nom;
}

std::string Consommable::getName()
{
    return name;
}

void Consommable::setEffect(std::string effet)
{
    effets = effet;
}

std::string Consommable::getEffect()
{
    return effets;
}

void Consommable::setQuantity(int quantity)
{
    quantite = quantity;
}

int Consommable::getQuantity()
{
    return quantite;
}

Consommable::Consommable()
{
    name = "Default";
    effets = "Default";
    quantite = 1;
}

void Consommable::afficherInfo() const
{
    
}

std::ostream& operator<<(std::ostream& out ,Consommable& item)
{
    out << "Nom : " << item.getName() <<std::endl <<"Effet : " << item.getEffect() <<std::endl;
    return out;
}
