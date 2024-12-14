#ifndef INVENTAIRE_H
#define INVENTAIRE_H

#include <string>
#include <vector>
#include <iostream>

class Item {
private:
    std::string name;
    int quantity;
    
public:
    Item(const std::string& name, int quantity);

   
    std::string getName() const;
    int getQuantity() const;
    
    void setQuantity(int qty);
    

    void display() const;
};

class Inventaire {
private:
    std::vector<Item> items;

public:
   
    void addItem(const Item& item);
    void removeItem(const std::string& itemName);
    void displayInventory() const;
};

#endif 