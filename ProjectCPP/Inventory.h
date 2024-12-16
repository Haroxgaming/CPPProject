#ifndef INVENTAIRE_H
#define INVENTAIRE_H

#include <string>
#include <vector>
#include "Personnage/Player.h"
#include <iostream>
#include "Consomable/Conssomable.h"

class Inventaire {
private:
    std::string name;
    int quantity;
    std::string effect;
    
    std::vector<Consommable> items;

public:
    std::string getName() const;
    int getQuantity() const;

    void setEffect(std::string description);
    std::string getEffect();
    
    void setQuantity(int qty);

    int getItemSize();
    
    void addItem(Consommable& item);
    void removeItem(Consommable& item);
    void displayInventory(int index);
    void use(int index, Player& target);
};

#endif 