#pragma once
#include "../Conssomable.h"

class EpeeAdamantite : public Consommable
{
public:
    EpeeAdamantite();
    void utiliser(Player& target);
};
