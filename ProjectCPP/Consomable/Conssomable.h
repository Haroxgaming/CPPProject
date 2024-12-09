#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <memory>

                      // Classe parent Consommable

class Consommable {
protected:
    std::string name;
    std::string effets;
    int quantite;

public:
    virtual void utiliser(); 
    virtual void afficherInfo() const {
        std::cout << "Nom : " << name << ", Effet : " << effets 
                  << ", Quantité : " << quantite << std::endl;
    }

    virtual ~Consommable() = default; // <-- Destructeur
};


