﻿#include "ArmureMitril.h"

ArmureMitril::ArmureMitril()
{
    quantite = 1;
    name = "Armure en mitril";
    effets = "Passe la classe d'armure a 12";
}

void ArmureMitril::utiliser(Character& target)
{
    target.setArmorClass(12);
}