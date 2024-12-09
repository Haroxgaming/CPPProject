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
    
                     //Constructeur(Conso)//
    
    
    Consommable(const std::string& nom, const std::string& effet, int quantite)
        : name(nom), effets(effet), quantite(quantite) {}

    
             // Use consommable//

    
    virtual void utiliser() = 0; 
    virtual void afficherInfo() const {
        std::cout << "Nom : " << name << ", Effet : " << effets 
                  << ", Quantité : " << quantite << std::endl;
    }

    virtual ~Consommable() = default; // <-- Destructeur
};


