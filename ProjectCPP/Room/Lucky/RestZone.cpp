#include "RestZone.h"

int RestZone::roomEffect(Player& target)
{
    target.setSpellNumber(target.getSpellNumber() + 1);
    return 0;
}
