#include "Spell Fireball.h"


SpellFireball::SpellFireball()
{
    Dammage = 10;
    Heal = 0;
}

void SpellFireball::utiliser(ennemy& target)
{
    target.setHealth(target.getHealth()-Dammage);
}

