﻿#pragma once
#include "../Conssomable.h"

class VitalityUpgradePotion : public Consommable
{
public:
    VitalityUpgradePotion();
    void utiliser(Player& target);
};
