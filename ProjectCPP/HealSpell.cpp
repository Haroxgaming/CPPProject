#include "HealSpell.h"

HealSpell::HealSpell()
{
    Dammage = 0;
    Heal = 8;
}

void HealSpell::utiliser(Player& target)
{
    target.setPointDeVie(target.getPointDeVie()+Heal);
}

