#pragma once
#include "../Conssomable.h"

class ArmureAdamantite : public Consommable
{
public:
    ArmureAdamantite();
    void utiliser(Character& target);
};
