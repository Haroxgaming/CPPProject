#include "inventory.h"

// ======= Item =======
std::string Item::getName() const {
    return name;
}

int Item::getQuantity() const {
    return quantity;
}


void Item::setQuantity(int qty) {
    quantity = qty;
}

void Item::display() const {
    std::cout << "Nom: " << name
              << ", Quantité: " << quantity;
              
}

// ======= Inventaire =======
void Inventaire::addItem(const Item& item) {
    for (auto& existingItem : items) {
        if (existingItem.getName() == item.getName()) {
            existingItem.setQuantity(existingItem.getQuantity() + item.getQuantity());
            return;
        }
    }
    items.push_back(item);
}

void Inventaire::removeItem(const std::string& itemName) {
    for (auto it = items.begin(); it != items.end(); ++it) {
        if (it->getName() == itemName) {
            items.erase(it);
            std::cout << "Objet utilisé : " << itemName << "\n";
            return;
        }
    }
    std::cout << "Objet non trouvé : " << itemName << "\n";
}

void Inventaire::displayInventory() const {
    std::cout << "=== Inventaire ===\n";
    for (const auto& item : items) {
        item.display();
    }
    if (items.empty()) {
        std::cout << "Inventaire vide.\n";
    }
}
