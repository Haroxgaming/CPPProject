#include "inventory.h"

// ======= Item =======
std::string Inventaire::getName() const {
    return name;
}

int Inventaire::getQuantity() const {
    return quantity;
}

void Inventaire::setEffect(std::string description)
{
    effect = description;
}

std::string Inventaire::getEffect()
{
    return effect;
}


void Inventaire::setQuantity(int qty) {
    quantity = qty;
}

int Inventaire::getItemSize()
{
    return items.size();
}

void Inventaire::addItem(Consommable& item)
{
    bool exist = false;
    for (int i = 0; i < items.size();i++)
    {
        if (items[i].getName() == item.getName())
        {
            items[i].setQuantity(items[i].getQuantity()+1);
            exist = true;
        }
    }
    if (!exist)
    {
        items.push_back(item);
    }
}

void Inventaire::removeItem(Consommable& item)
{
    for (int i = 0; i < items.size();i++)
    {
        if (items[i].getName() == item.getName())
        {
            items[i].setQuantity(items[i].getQuantity()-1);
        }
    }
}

void Inventaire::displayInventory(int index)
{
    std::cout<< items[index];
    std::cout<< "Quantity : " << items[index].getQuantity()<<std::endl;
}

void Inventaire::use(int index, Player& target)
{
    items[index].utiliser(target);    
}