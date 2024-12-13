#include "ArmureAdamantite.h"

ArmureAdamantite::ArmureAdamantite()
{
    quantite = 1;
    name = "Armure en adamantite";
    effets = "Passe la classe d'armure a 14";
}

void ArmureAdamantite::utiliser(Character& target)
{
    target.setArmorClass(14);
}
