#pragma once
#include "../Conssomable.h"

class EpeeMitril : public Consommable
{
public:
    EpeeMitril();
    void utiliser(Player& target);
};
