#pragma once
#include "../Conssomable.h"

class ManaPotion : public Consommable
{
public:
    ManaPotion();
    void utiliser(Character& target);
};
