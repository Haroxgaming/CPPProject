#pragma once
#include <random>
#include "../Consomable/Usage unique/Aiguisoir.h"
#include "../Consomable/Usage unique/HealthPotion.h"
#include "../Consomable/Usage unique/ManaPotion.h"
#include "../Consomable/Usage unique/VitalityUpgradePotion.h"
#include "../Consomable/Equipement/EpeeForge.h"
#include "../Consomable/Equipement/EpeeAdamantite.h"
#include "../Consomable/Equipement/EpeeMitril.h"
#include "../Consomable/Equipement/ArmureAdamantite.h"
#include "../Consomable/Equipement/ArmureMitril.h"
#include "../Consomable/Equipement/ArmureForge.h"
#include "../Personnage/Player.h"

class Room
{
    virtual int roomEffect();
};
