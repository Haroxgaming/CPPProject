﻿#include "ArmureForge.h"

ArmureForge::ArmureForge()
{
    quantite = 1;
    name = "Armure forgé";
    effets = "Passe la classe d'armure a 11";
}

void ArmureForge::utiliser(Player& target)
{
    target.setarmor(11);
}