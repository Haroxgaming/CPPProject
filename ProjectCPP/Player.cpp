#include "Player.h"
#include <iostream>

Player::Player(const std::string& name)
{
    nom = name;
}

void Player::setATKBuff(bool buff)
{
    ATKBuff = buff;
}

bool Player::getATKBuff()
{
    return ATKBuff;
}

void Player::setPVMax(int AddHP)
{
    pvMax = pvMax+AddHP;
}

int Player::getPVMax()
{
    return pvMax;
}

void Player::attack(ennemy& target)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, attaque);
    if (ATKBuff)
    {
        target.setHealth(target.getHealth()-(attaque+5));
        setATKBuff(false);
    }
    else
    {
        target.setHealth(target.getHealth()-attaque);
    }
}

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
    pointsDeVie = vie <= 0 ? 0 : vie;
    if (pointsDeVie > pvMax) pointsDeVie = pvMax;
}

int Player::getPointDeVie()
{
    return pointsDeVie;
}

void Player::setAttaque(int attack)
{
    attaque = attack <= 0 ? 8 : attack;
}

int Player::getAttaque()
{
    return attaque;
}

void Player::setGold(int money)
{
    gold = money <= 0 ? 0 : money;
}

int Player::getGold()
{
    return gold;
}

void Player::setSpellNumber(int spell)
{
    spellNumber = spell <= 0 ? 0 : spell;
}

int Player::getSpellNumber()
{
    return spellNumber;
}

void Player::checkEndGame()
{
    if (getPointDeVie() == 0)
    {
        std::cout<<"fin de partie vous êtes mort!"<<std::endl;
    }
}