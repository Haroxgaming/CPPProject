#include <iostream>
#include <conio.h>
#include <locale>
#include <signal.h>
#include <windows.h>

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
        
        std::cout<<"Choisi une direction : "<<std::endl
        <<"   -Left: touche Q"<<std::endl
        <<"   -Right: touche D"<<std::endl
        <<"   -Forward: touche Z"<<std::endl
        <<"   -Back: touche S"<<std::endl
        <<"   -Boss: touche E"<<std::endl;
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
