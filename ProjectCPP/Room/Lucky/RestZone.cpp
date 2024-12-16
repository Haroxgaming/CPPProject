#include "RestZone.h"

int RestZone::roomEffect(Player& target)
{
    std::cout<<"Vous vous reposez et vous récupérez un emplacement de sort"<<std::endl;
    target.setSpellNumber(target.getSpellNumber() + 1);
    Sleep(2000);
    return 0;
}
