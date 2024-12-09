#include "Character.h"

Character::Character()
{
    Health = 12;
    pvMax = 12;
    attack = 4;
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

void Character::setAttack(int ATK)
{
    attack = ATK <= 0 ? 8 : ATK;
}

int Character::getAttack()
{
    return attack;
}

void Character::setArmorClass(int armor)
{
    armorClass = armor <= 0 ? 5 : armor;
}

int Character::getArmorClass()
{
    return armorClass;
}
