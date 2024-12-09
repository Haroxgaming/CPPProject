#include "HealthPotion.h"

void HealthPotion::utiliser()
{
    if (quantite > 0) {
        std::cout << "Vous utilisez une " << name << ". Vous récupérez " 
                  << soin << " points de vie." << std::endl;
        quantite--;
    } else
    {
        std::cout << name << " est épuisée !" << std::endl;
    }
}    
