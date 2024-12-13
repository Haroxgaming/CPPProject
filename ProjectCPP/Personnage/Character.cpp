#include "Character.h"

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

void Character::setArmorClass(int armor)
{
    armorClass = armor <= 0 ? 5 : armor;
}

int Character::getArmorClass()
{
    return armorClass;
}

void Character::attack(Character& target, bool crit)
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

void Character::rollDice(Character& target)
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
            }
        }
    }
}
