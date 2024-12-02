#pragma once
#include "Conssomable.h"


class HealthPotion : public Consommable
{
private:
    int soin;

public:
    
    HealthPotion(int soin, int quantite)
        : Consommable("Potion de Santé", "Restaure des points de vie", quantite), soin(soin) {}

    void utiliser() override;
    
};
