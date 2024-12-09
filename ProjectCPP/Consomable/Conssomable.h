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
    virtual void utiliser(); 
    virtual void afficherInfo() const;
    virtual ~Consommable() = default; // <-- Destructeur
};


