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
    void setName (std::string nom);
    std::string getName();

    void setEffect (std::string effet);
    std::string getEffect();

    void setQuantity (int quantity);
    int getQuantity();
    
    Consommable();
    virtual void utiliser(Character& target) = 0; 
    virtual void afficherInfo() const;
    friend std::ostream& operator <<(std::ostream& out ,Consommable& item);
};


