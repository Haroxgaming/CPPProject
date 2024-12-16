#include "Player.h"

#include <windows.h>

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
        Sleep(2000);
        exit(0);
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
    std::cout<<"PV de l'ennemi restant :"<<target.getHealth()<<std::endl;
}

void Player::rollDice(Character& target)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 20);
    int dice = dis(gen);
    std::cout<<"lancer : "<<dice<<std::endl;
    if(dice == 20)
    {
        std::cout<<" REUSSITE CRITIQUE"<<std::endl;
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
                std::cout<<" ECHEC CRITIQUE"<<std::endl;
                setHealth(getHealth()-4);
                std::cout<<"PV de l'ennemi restant :"<<target.getHealth()<<std::endl;
                checkEndGame();
            }
        }
    }
}

void Player::Heal()
{
    Health = Health+8;
    Health = Health <= pvMax ? pvMax : Health;
    spellNumber--;
    spellNumber = spellNumber <= 0 ? 0 : spellNumber;
    std::cout<<"PV restant: "<<Health<<std::endl;
    std::cout<<"Spell restant: "<<spellNumber<<std::endl;
}

void Player::fireBall(Character& target)
{
    target.setHealth(target.getHealth()-10);
    std::cout<<"Degats infliger: 10"<<std::endl<<"PV de l'ennemi restant: "<<target.getHealth()<<std::endl;
}
