#pragma once
#include "../Conssomable.h"


class HealthPotion : public Consommable
{
private:
    int soin;

public:
    
    HealthPotion();
    void utiliser(Character& target);
    
};
