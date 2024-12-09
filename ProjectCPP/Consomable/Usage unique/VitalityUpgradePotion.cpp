#include "VitalityUpgradePotion.h"


VitalityUpgradePotion::VitalityUpgradePotion()
{
    quantite = 1;
    name = "VitalityUpgradePotion";
    effets = "Augmente les PV max de 5";
}

void VitalityUpgradePotion::utiliser(Player& target)
{
    target.setPVMax(5);
}
