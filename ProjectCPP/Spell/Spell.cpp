#include "Spell.h"

#include "../Personnage/Player.h"

Spell::Spell()
{
    Dammage = 1;
    Heal = 1;
}

void Spell::healing(Player& player, Character& target)
{
    target.setHealth(target.getHealth()+Heal);
    player.setSpellNumber(player.getSpellNumber()-1);
    std::cout<<"Vous vous êtes soigné de " << Heal << "PV!"<<std::endl;
}

void Spell::attack(Player& player, Character& target)
{
    target.setHealth(target.getHealth()-Dammage);
    player.setSpellNumber(player.getSpellNumber()-1);
}
