#include "Room.h"

void Room::setLuckLevel()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 4);
    int luckLevel = dis(gen);
    switch (luckLevel) {  }
}

