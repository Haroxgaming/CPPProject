#include "Player.h"

Player::Player()
{
    nom = "Rémi";
    Health = 20;
    pvMax = 20;
    attack = 8;
    ATKBuff = false;
    armure = 10;
    gold = 0;
    spellNumber = 2;
}

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

void Player::attack(Character& target)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, attaque);
    int damage = dis(gen);
    if (ATKBuff)
    {
        target.setHealth(target.getHealth()-(damage+5));
        setATKBuff(false);
    }
    else
    {
        target.setHealth(target.getHealth()-damage);
    }
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
    if (getHealth() == 0)
    {
        std::cout<<"fin de partie vous êtes mort!"<<std::endl;
    }
}