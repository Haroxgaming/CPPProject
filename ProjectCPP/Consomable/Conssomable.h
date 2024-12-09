#pragma once
#include <iostream>
#include <string>
#include "../Player.h"

class Consommable {
protected:
    std::string name;
    std::string effets;
    int quantite;

public:
    Consommable();
    virtual void utiliser(Player& target) = 0; 
    virtual void afficherInfo() const;
};


