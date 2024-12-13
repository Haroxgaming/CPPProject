#pragma once
#include "../Conssomable.h"

class Aiguisoir : public Consommable
{
public:
    Aiguisoir();
    virtual void utiliser(Character& target);
};
