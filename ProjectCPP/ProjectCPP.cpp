#include <iostream>
#include <conio.h>
#include <locale>
#include <windows.h>
#include "Room/Room.h"

void spawnRoom()
{
    int lucky = 0;
    int unlucky = 0;
    int normal = 0;
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