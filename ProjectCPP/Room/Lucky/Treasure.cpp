#include "Treasure.h"

int Treasure::roomEffect()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 10);
    int item = dis(gen);
    switch (item)
    {
    case 1:
        break;
    }
}
