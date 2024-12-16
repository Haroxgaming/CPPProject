#include "Character.h"

#include <windows.h>

Character::Character()
{
    Health = 12;
    pvMax = 12;
    Degats = 4;
    armorClass = 7;
}

void Character::setHealth(int HP)
{
    Health = HP <= 0 ? 0 : HP;
    if (Health > pvMax) Health = pvMax;
}

int Character::getHealth()
{
    return Health;
}

void Character::SetPVMax(int AddMax)
{
    pvMax = pvMax+AddMax;
}

int Character::getPVMax()
{
    return pvMax;
}

void Character::setDegats(int ATK)
{
    Degats = ATK <= 0 ? 8 : ATK;
}

int Character::getDegats()
{
    return Degats;
}

void Character::setName(std::string name)
{
    nom=name;
}

std::string Character::getName()
{
    return nom;
}

void Character::setArmorClass(int armor)
{
    armorClass = armor <= 0 ? 5 : armor;
}

int Character::getArmorClass()
{
    return armorClass;
}

void Character::setATKBuff(bool buff)
{
    ATKBuff = buff;
}

bool Character::getATKBuff()
{
    return ATKBuff;
}

void Character::setGold(int money)
{
    gold = money <= 0 ? 0 : money;
}

int Character::getGold()
{
    return gold;
}

void Character::setSpellNumber(int spell)
{
    spellNumber = spell <= 0 ? 0 : spell;
}

int Character::getSpellNumber()
{
    return spellNumber;
}

void Character::chekEndGame()
{
}

void Character::attack(Character& target, bool crit)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, Degats);
    int damage = dis(gen);
    if (crit)
    {
        damage = damage+Degats;
    }
    target.setHealth(target.getHealth()-damage);
    std::cout<<"PV restant :"<<target.getHealth()<<std::endl;
    Sleep(2000);
    system("cls");
}

void Character::rollDice(Character& target)
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
                setHealth(getHealth()-4);
                std::cout<<" ECHEC CRITIQUE"<<std::endl;
            }
        }
    }
}

int Character::getInitiative()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 20);
    int dice = dis(gen);
    return dice;
}
