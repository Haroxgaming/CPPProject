#pragma once
#include "../Conssomable.h"

class ArmureMitril : public Consommable
{
public:
    ArmureMitril();
    void utiliser(Character& target);
};
