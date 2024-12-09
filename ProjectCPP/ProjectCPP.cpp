#include <iostream>
#include <conio.h>
#include <locale>
#include <signal.h>
#include <vector>
#include <windows.h>

#include "ennemy.h"
#include "Room/Room.h"
#include "Room/Lucky/RestZone.h"
#include "Room/Lucky/Shop.h"
#include "Room/Lucky/Treasure.h"
#include "Room/Normal/Deal.h"
#include "Room/Normal/Ennemis.h"
#include "Room/Normal/Nothing.h"
#include "Room/Unlucky/EnnemisPuissant.h"
#include "Room/Unlucky/Steal.h"
#include "Room/Unlucky/Trap.h"

void spawnRoom()
{
    int lucky = 0;
    int unlucky = 0;
    int normal = 0;
    for (int i = 0; i<4; i++)
    {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(1, 12);
        int Room = dis(gen);
        switch (Room)
        {
        case 1:
            RestZone ;
            lucky++;
            break;
        case 2:
            Shop ;
            lucky++;
            break;
        case 3:
            Treasure ;
            lucky++;
            break;
        case 4:
            EnnemisPuissant ;
            unlucky++;
            break;
        case 5:
            Steal ;
            unlucky++;
            break;
        case 6:
            Trap ;
            unlucky++;
            break;
        case 7:
            Deal ;
            normal++;
            break;
        case 8:
            Deal ;
            normal++;
            break;
        case 9:
            Ennemis ;
            normal++;
            break;
        case 10:
            Ennemis ;
            normal++;
            break;
        case 11:
            Nothing ;
            normal++;
            break;
        case 12:
            Nothing ;
            normal++;
            break;
        default:
            Nothing ;
            normal++;
        }
    }
    std::cout<<"Voici les information des pièces qui t'entoure :"<<std::endl;
    std::cout << "Lucky : "<< lucky << "    Unlucky : "<< unlucky << "    Normal : "<< normal << std::endl;
}

int main()
{
    std::locale::global(std::locale("fr_FR.utf8"));
    char ch = ',';
    std::cout<<"--------------Appuyer sur e pour commencer--------------"<<std::endl;
    
    while (ch !='e')
    {
        ch = _getch();
        if (ch=='e') std::cout<<"bonjour"<<std::endl;
    }
    
    system("cls");
    std::cout<<"bienvenu dans le donjon labyrinthe ici la logique n'est plus vous pouvez passé une porte et revenir sur vos pas et tout aura changé"<<std::endl;
    Sleep(4000);
    
    while (true)
    {
        system("cls");
        
        spawnRoom();
        
        std::cout<<"Choisi une direction : "<<std::endl
        <<"   -Left: touche Q"<< "   -Right: touche D" << "   -Forward: touche Z" << "   -Back: touche S" << "   -Boss: touche E"<<std::endl;
        ch = _getch();
        
        system("cls");
        
        switch (ch)
        {
        case 'z':
            std::cout<<"z";
            break;
        case 's':
            std::cout<<"s";
            break;
        case 'q':
            std::cout<<"q";
            break;
        case 'd':
            std::cout<<"d";
            break;
        case 'e':
            std::cout<<"e";
            break;
        default:
            std::cout<<"Entrer invalide";
        }
        Sleep(3000);
    }
}