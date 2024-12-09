#include "Meteor.h"
Meteor::Meteor()
{
    Dammage = 25;
    Heal = 0;
}

void Meteor::utiliser(ennemy& target)
{
    target.setHealth(target.getHealth()-Dammage);
}


