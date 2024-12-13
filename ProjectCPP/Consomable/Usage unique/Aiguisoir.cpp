#include "Aiguisoir.h"

Aiguisoir::Aiguisoir()
{
    quantite = 1;
    name = "Aiguisoir";
    effets = "Permet de faire +5 dégâts sur la prochaine attaque";
}

void Aiguisoir::utiliser(Character& target)
{
    target.setATKBuff(true);
}
