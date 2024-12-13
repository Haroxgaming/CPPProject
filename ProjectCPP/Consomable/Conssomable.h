#pragma once
#include <iostream>
#include <string>
#include "../Personnage/Character.h"

class Consommable {
protected:
    std::string name;
    std::string effets;
    int quantite;

public:
    Consommable();
    virtual void utiliser(Character& target) = 0; 
    virtual void afficherInfo() const;
};


