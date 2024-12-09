#include "Player.h"
#include <iostream>

void Player::setarmor(int armor)
{
    armure = armor <= 0 ? 5 : armor;
}

int Player::getarmor()
{
    return armure;
}

void Player::setPointDeVie(int vie)
{
    pointsDeVie = vie <= 0 ? 5 : vie;
}

int Player::getPointDeVie()
{
    return pointsDeVie;
}

void Player::setAttaque(int attack)
{
    attaque = attack <= 0 ? 5 : attack;
}

int Player::getAttaque()
{
    return attaque;
}

void Player::setGold(int money)
{
    gold = money <= 0 ? 5 : money;
}

int Player::getGold()
{
    return gold;
}

void Player::setSpellNumber(int spell)
{
    spellNumber = spell <= 0 ? 5 : spell;
}

int Player::getSpellNumber()
{
    return spellNumber;
}
