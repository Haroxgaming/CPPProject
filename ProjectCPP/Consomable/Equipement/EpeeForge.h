﻿#pragma once
#include "../Conssomable.h"

class EpeeForge : public Consommable
{
public:
    EpeeForge();
    void utiliser(Player& target);
};