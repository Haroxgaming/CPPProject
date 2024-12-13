#pragma once
#include "../Conssomable.h"

class ArmureForge : public Consommable
{
public:
    ArmureForge();
    void utiliser(Character& target);
};
