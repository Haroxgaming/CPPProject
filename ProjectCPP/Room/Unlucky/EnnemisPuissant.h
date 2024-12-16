#pragma once

#include "../Room.h"

class EnnemisPuissant : public Room
{
public:
    virtual int roomEffect(Player& target);
};
