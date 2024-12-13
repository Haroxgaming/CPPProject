#include <iostream>
#include <conio.h>
#include <locale>
#include <windows.h>
#include "Personnage/Ennemis/ennemy.h"
#include "Room/Lucky/RestZone.h"
#include "Room/Lucky/Shop.h"
#include "Room/Lucky/Treasure.h"
#include "Room/Normal/EnnemisRoom.h"
#include "Room/Normal/Nothing.h"
#include "Room/Unlucky/EnnemisPuissant.h"
#include "Room/Unlucky/Steal.h"
#include "Room/Unlucky/Trap.h"

void fight(Player& Hero, ennemy& target)
{
    
}

void spawnRoom(Player& Hero)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 11);
    int roomChoose = dis(gen);
    switch (roomChoose)
    {
    case 1:
        EnnemisRoom ennemis1;
        std::cout<<"Vous entez dans une salle avec un ennemi"<<std::endl;
        break;
    case 2:
        EnnemisRoom ennemis2;
        std::cout<<"Vous entez dans une salle avec un ennemi"<<std::endl;
        break;
    case 3:
        EnnemisRoom ennemis3;
        std::cout<<"Vous entez dans une salle avec un ennemi"<<std::endl;
        break;
    case 4:
        Nothing nothing1;
        nothing1.roomEffect();
        break;
    case 5:
        Nothing nothing2;
        nothing2.roomEffect();
        break;
    case 6:
        EnnemisPuissant ennemisPuissant1;
        std::cout<<"Vous entez dans une salle avec un ennemi puissant"<<std::endl;
        break;
    case 7:
        Steal steal1;
        steal1.roomEffect(Hero);
        break;
    case 8:
        Trap trap1;
        trap1.roomEffect(Hero);
        break;
    case 9:
        RestZone rest1;
        rest1.roomEffect(Hero);
        break;
    case 10:
        Shop shop1;
        break;
    case 11:
        Treasure treasure1;
        break;
    default:
        Nothing nothing3;
        nothing3.roomEffect();
        break;
    }
}

int main()
{
                                //ENTRER DANS LE DONJON
    std::locale::global(std::locale("fr_FR.utf8"));
    char ch = ',';
    std::cout<<"--------------Appuyer sur e pour commencer--------------"<<std::endl;
    
    while (ch !='e')
    {
        ch = _getch();
    }
    
    system("cls");
    std::cout<<"bienvenu dans le donjon labyrinthe ici la logique n'est plus vous pouvez passé une porte et revenir sur vos pas et tout aura changé"<<std::endl;
    Sleep(4000);

                                //CREATION DU HERO
    system("cls");
    std::string name;
    std::cout<<"Avant toute chose il te faut un nom aventurier"<<std::endl<<"Nom: ";
    std::cin>> name;
    Player Hero(name);
    system("cls");
    
    std::cout<<"Bienvenu dans le donjon hero nommé " << name <<std::endl;
    Sleep(3000);
    

                                //START
    while (true)
    {
        system("cls");
        
        std::cout<<"Choisi ton action : "<<std::endl
        <<"   -Continu: touche Z" << "   -Boss: touche E"<<std::endl;
        ch = _getch();
        
        system("cls");
        
        switch (ch)
        {
        case 'z':
            spawnRoom(Hero);
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