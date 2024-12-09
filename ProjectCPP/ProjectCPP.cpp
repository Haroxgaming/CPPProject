#include <iostream>
#include <conio.h>
#include <locale>
#include <signal.h>
#include <vector>
#include <windows.h>
#include "ennemy.h"
#include "Room/Room.h"

void spawnRoom()
{
    int lucky = 0;
    int unlucky = 0;
    int normal = 0;
    for (int i = 0; i<3; i++)
    {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(1, 12);
        int Room = dis(gen);
        switch (Room)
        {
        case 1:
            lucky++;
            switch (i)
            {
            case 0:
                RestZone rest1;
                break;
            case 1:
                RestZone rest2;
                break;
            case 2:
                RestZone rest3;
                break;
            case 3:
                RestZone rest4;
                break;
            }
            break;
        case 2:
            lucky++;
            switch (i)
            {
            case 0:
                Shop shop1;
                break;
            case 1:
                Shop shop2;
                break;
            case 2:
                Shop shop3;
                break;
            case 3:
                Shop shop4;
                break;
            }
            break;
        case 3:
            lucky++;
            switch (i)
            {
            case 0:
                Treasure treasure1;
                break;
            case 1:
                Treasure treasure2;
                break;
            case 2:
                Treasure treasure3;
                break;
            case 3:
                Treasure treasure4;
                break;
            }
            break;
        case 4:
            unlucky++;
            switch (i)
            {
            case 0:
                EnnemisPuissant ennemiPuissant1;
                break;
            case 1:
                EnnemisPuissant ennemiPuissant2;
                break;
            case 2:
                EnnemisPuissant ennemiPuissant3;
                break;
            case 3:
                EnnemisPuissant ennemiPuissant4;
                break;
            }
            break;
        case 5:
            unlucky++;
            switch (i)
            {
            case 0:
                Steal steal1;
                break;
            case 1:
                Steal steal2;
                break;
            case 2:
                Steal steal3;
                break;
            case 3:
                Steal steal4;
                break;
            }
            break;
        case 6:
            unlucky++;
            switch (i)
            {
            case 0:
                Trap trap1;
                break;
            case 1:
                Trap trap2;
                break;
            case 2:
                Trap trap3;
                break;
            case 3:
                Trap trap4;
                break;
            }
            break;
        case 7:
            normal++;
            switch (i)
            {
            case 0:
                Deal deal1;
                break;
            case 1:
                Deal deal2;
                break;
            case 2:
                Deal deal3;
                break;
            case 3:
                Deal deal4;
                break;
            }
            break;
        case 8:
            normal++;
            switch (i)
            {
            case 0:
                Deal deal1;
                break;
            case 1:
                Deal deal2;
                break;
            case 2:
                Deal deal3;
                break;
            case 3:
                Deal deal4;
                break;
            }
            break;
        case 9:
            normal++;
            switch (i)
            {
            case 0:
                Ennemis ennemis1;
                break;
            case 1:
                Ennemis ennemis2;
                break;
            case 2:
                Ennemis ennemis3;
                break;
            case 3:
                Ennemis ennemis4;
                break;
            }
            break;
        case 10:
            normal++;
            switch (i)
            {
            case 0:
                Ennemis ennemis1;
                break;
            case 1:
                Ennemis ennemis2;
                break;
            case 2:
                Ennemis ennemis3;
                break;
            case 3:
                Ennemis ennemis4;
                break;
            }
            break;
        case 11:
            switch (i)
            {
        case 0:
            Nothing nothing1;
                break;
        case 1:
            Nothing nothing2;
                break;
        case 2:
            Nothing nothing3;
                break;
        case 3:
            Nothing nothing4;
                break;
            }
            normal++;
            break;
        case 12:
            switch (i)
            {
        case 0:
            Nothing nothing1;
                break;
        case 1:
            Nothing nothing2;
                break;
        case 2:
            Nothing nothing3;
                break;
        case 3:
            Nothing nothing4;
                break;
            }
            normal++;
            break;
        default:
            switch (i)
            {
        case 0:
            Nothing nothing1;
                break;
        case 1:
            Nothing nothing2;
                break;
        case 2:
            Nothing nothing3;
                break;
        case 3:
            Nothing nothing4;
                break;
            }
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