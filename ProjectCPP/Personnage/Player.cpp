#include "Player.h"

Player::Player()
{
    nom = "Héro";
    Health = 20;
    pvMax = 20;
    Degats = 8;
    ATKBuff = false;
    armorClass = 10;
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
    if (getHealth() <= 0)
    {
        std::cout<<"fin de partie vous êtes mort!"<<std::endl;
    }
}

void Player::attack(Character& target, bool crit)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, Degats);
    int damage = dis(gen);
    if (crit)
    {
        target.setHealth(target.getHealth()-(damage+Degats));
    }
    else
    {
        target.setHealth(target.getHealth()-damage);
    }
}

void Player::rollDice(Character& target)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 20);
    int dice = dis(gen);
    if(dice == 20)
    {
        attack(target, true);
    }
    else
    {
        if (dice>target.getArmorClass())
        {
            attack(target, false);
        }
        else
        {
            if (dice==1)
            {
                setHealth(getHealth()-4);
                checkEndGame();
            }
        }
    }
}