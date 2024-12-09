#include "ArmureAdamantite.h"

ArmureAdamantite::ArmureAdamantite()
{
    quantite = 1;
    name = "Armure en adamantite";
    effets = "Passe la classe d'armure a 14";
}

void ArmureAdamantite::utiliser(Player& target)
{
    target.setarmor(14);
}
