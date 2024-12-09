#pragma once
#include "../Conssomable.h"

class Aiguisoir : public Consommable
{
public:
    Aiguisoir();
    void utiliser(Player& target);
};
