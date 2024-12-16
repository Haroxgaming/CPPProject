#include <iostream>
#include <conio.h>
#include <locale>
#include <windows.h>
#include "Inventory.h"
#include "Personnage/Ennemis/ennemy.h"
#include "Personnage/Ennemis/Goblin.h"
#include "Personnage/Ennemis/Kobolt.h"
#include "Personnage/Ennemis/Ogre.h"
#include "Personnage/Ennemis/Roidemon.h"
#include "Room/Lucky/RestZone.h"
#include "Room/Lucky/Shop.h"
#include "Room/Lucky/Treasure.h"
#include "Room/Normal/EnnemisRoom.h"
#include "Room/Normal/Nothing.h"
#include "Room/Unlucky/EnnemisPuissant.h"
#include "Room/Unlucky/Steal.h"
#include "Room/Unlucky/Trap.h"

void fight(Player& Hero, ennemy& target, Inventaire& inventaire)
{
    system("cls");
    char ch =',';
    int turn = 0;
    int indexInv = 0;
    int initiativeHero = Hero.getInitiative();
    int initiativeEnnemi = target.getInitiative();

    std::cout<<"vous lancez votre initiative !"<<std::endl;
    Sleep(500);
    std::cout<<"vous avez fais "<<initiativeHero<<std::endl;
    Sleep(1000);
    system("cls");
    
    if (initiativeHero<initiativeEnnemi)
    {
        turn++;
        std::cout<<"l'ennemi commence";
    }
    else
    {
        std::cout<<"vous pouvez commencer";
    }
    Sleep(2000);
    system("cls");
    
    while (Hero.getHealth()>0 && target.getHealth()>0)
    {
        system("cls");
        turn = turn % 2;
        if (turn == 1)
        {
            std::cout<<"Tour de l'ennemi"<<std::endl;
            Sleep(1500);
            system("cls");
            target.rollDice(Hero);
            turn++;
        }
        else
        {
            bool loop = true;
            std::cout<<"a vorte tour";
            Sleep(1500);
            system("cls");
            while (loop)
            {
                system("cls");
                bool sortValide = true;
                std::cout<<"choisissez votre action :"<<std::endl<< "-Attaquer: z     -Spell: e      -Item: r"<<std::endl;
                ch = _getch();

                switch (ch)
                {
                case 'e':
                    while (sortValide)
                    {
                        std::cout<< "vous avez "<< Hero.getSpellNumber() << " emplacement de sort"<<std::endl;
                        std::cout<< "-Heal: e     -Fireball: z     -cancel: a"<<std::endl;
                        ch = _getch();
                        switch (ch)
                        {
                        case 'e':
                            if (Hero.getSpellNumber()>0)
                            {
                                Hero.Heal();
                                sortValide = false;
                                loop = false;
                                Sleep(2000);
                                system("cls");
                                break;
                            }
                            else
                            {
                                std::cout<<"Vous n'avez pas suffisament d'emplacement de sort";
                                Sleep(2000);
                                system("cls");
                                break;
                            }
                        case 'z':
                            if (Hero.getSpellNumber()>0)
                            {
                                Hero.fireBall(target);
                                sortValide = false;
                                loop = false;
                                Sleep(2000);
                                system("cls");
                                break;
                            }
                            else
                            {
                                std::cout<<"Vous n'avez pas suffisament d'emplacement de sort";
                                Sleep(2000);
                                system("cls");
                                break;
                            }
                        case 'a':
                            sortValide=false;
                            break;
                        default:
                            std::cout<<"Entrer invalide";
                        }
                    }
                    break;
                case 'z':
                    Hero.rollDice(target);
                    Sleep(1500);
                    system("cls");
                    loop = false;
                    break;
                case 'r':
                    system("cls");
                    std::cout<< "-previous: q     -next: d     -cancel: a     -select: s"<<std::endl;
                    ch = _getch();
                    switch (ch)
                    {
                    case 'q':
                        indexInv--;
                        if (indexInv<0)
                        {
                            indexInv = 0;
                        }
                        inventaire.displayInventory(indexInv);
                        break;
                    case 'd':
                        indexInv++;
                        if (indexInv>inventaire.getItemSize())
                        {
                            indexInv = inventaire.getItemSize();
                        }
                        inventaire.displayInventory(indexInv);
                        break;
                    case 'a':
                        break;
                    case 's':
                        inventaire.use(indexInv, Hero);
                        break;
                    default:
                        break;
                    }
                    
                default:
                    std::cout<<"Entrer invalide";
                    break;
                }
            }
        turn++;
        }
    }
    Hero.chekEndGame();
    Hero.setGold(Hero.getGold()+10);
    std::cout<<"Vous gagnez 10 gold"<<std::endl;
    Sleep(2000);
    system("cls");
}

void spawnRoom(Player& Hero, Inventaire& inventaire)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 11);
    int roomChoose = dis(gen);
    char ch = ',';
    Nothing nothing1;
    Treasure treasure1;
    EnnemisRoom ennemis1;
    EnnemisPuissant ennemisPuissant1;
    RestZone rest1;
    Steal steal1;
    Trap trap1;
    Shop shop1;
    Ogre ogre1;
    Kobolt kobolt1;
    Goblin goblin1;
    Aiguisoir a1;
    HealthPotion hp1;
    ManaPotion mp1;
    VitalityUpgradePotion vup1;
    ArmureAdamantite aa1;
    ArmureMitril am1;
    ArmureForge af1;
    EpeeAdamantite ea1;
    EpeeMitril em1;
    EpeeForge ef1;
    
    int selected = 0;
    int objet = 0;
    
    switch (roomChoose)
    {
    case 1:
        selected = ennemis1.roomEffect();
        switch (selected)
        {
        case 1:
            std::cout<<"Vous entez dans une salle avec un Goblin"<<std::endl;
            Sleep(2000);
            fight(Hero, goblin1, inventaire);
            break;
        case 2:
            std::cout<<"Vous entez dans une salle avec un Kobolt"<<std::endl;
            Sleep(2000);
            fight(Hero, kobolt1, inventaire);
            break;
        default:
            std::cout<<"Vous entez dans une salle avec un Goblin"<<std::endl;
            Sleep(2000);
            fight(Hero, goblin1, inventaire);
            break;
        }
        break;
    case 2:
        selected = ennemis1.roomEffect();
        switch (selected)
        {
        case 1:
            std::cout<<"Vous entez dans une salle avec un Goblin"<<std::endl;
            Sleep(2000);
            fight(Hero, goblin1, inventaire);
            break;
        case 2:
            std::cout<<"Vous entez dans une salle avec un Kobolt"<<std::endl;
            Sleep(2000);
            fight(Hero, kobolt1, inventaire);
            break;
        default:
            std::cout<<"Vous entez dans une salle avec un Goblin"<<std::endl;
            Sleep(2000);
            fight(Hero, goblin1, inventaire);
            break;
        }
        break;
    case 3:
        selected = ennemis1.roomEffect();
        switch (selected)
        {
        case 1:
            std::cout<<"Vous entez dans une salle avec un Goblin"<<std::endl;
            Sleep(2000);
            fight(Hero, goblin1, inventaire);
            break;
        case 2:
            std::cout<<"Vous entez dans une salle avec un Kobolt"<<std::endl;
            Sleep(2000);
            fight(Hero, kobolt1, inventaire);
            break;
        default:
            std::cout<<"Vous entez dans une salle avec un Goblin"<<std::endl;
            Sleep(2000);
            fight(Hero, goblin1, inventaire);
            break;
        }
        break;
    case 4:
        nothing1.roomEffect();
        Sleep(2000);
        system("cls");
        break;
    case 5:
        nothing1.roomEffect();
        Sleep(2000);
        system("cls");
        break;
    case 6:
        ennemisPuissant1.roomEffect(Hero);
        fight(Hero, ogre1, inventaire);
        break;
    case 7:
        steal1.roomEffect(Hero);
        break;
    case 8:
        trap1.roomEffect(Hero);
        break;
    case 9:
        rest1.roomEffect(Hero);
        break;
    case 10:
        objet = shop1.roomEffect();
        std::cout<<"un marchant vous propose ";
        switch (objet)
        {
        case 1:
            std::cout<<a1;
            std::cout<<"contre 15 gold"<< "            Vous avez actuellement " << Hero.getGold() <<" Gold"<<std::endl<<"Y/N"<<std::endl;
            ch = _getch();
            switch (ch)
            {
            case 'y':
                if(Hero.getGold()>10)
                {
                    inventaire.addItem(a1);
                    Hero.setGold(Hero.getGold()-10);
                    std::cout<<"ceci est maintenant dans votre inventaire"<<std::endl;
                    Sleep(2000);
                    system("cls");
                }
                else
                {
                    std::cout<<"Vous n'avez pas les moyens"<<std::endl;
                    Sleep(2000);
                    system("cls");
                }
                break;
            case 'n':
                std::cout<<"vous passez votre chemain"<<std::endl;
                Sleep(2000);
                system("cls");
                break;
            default:
                std::cout<<"vous passez votre chemain"<<std::endl;
                Sleep(2000);
                system("cls");
            }
            break;
        case 2:
            std::cout<<hp1;
            std::cout<<"contre 15 gold"<< "            Vous avez actuellement " << Hero.getGold() <<" Gold"<<std::endl<<"Y/N"<<std::endl;
            ch = _getch();
            switch (ch)
            {
            case 'y':
                if(Hero.getGold()>15)
                {
                    inventaire.addItem(hp1);
                    Hero.setGold(Hero.getGold()-15);
                    std::cout<<"ceci est maintenant dans votre inventaire"<<std::endl;
                    Sleep(2000);
                    system("cls");
                }
                else
                {
                    std::cout<<"Vous n'avez pas les moyens"<<std::endl;
                    Sleep(2000);
                    system("cls");
                }
                break;
            case 'n':
                std::cout<<"vous passez votre chemain"<<std::endl;
                Sleep(2000);
                system("cls");
                break;
            default:
                std::cout<<"vous passez votre chemain"<<std::endl;
                Sleep(2000);
                system("cls");
            }
            break;
        case 3:
            std::cout<<mp1;
            std::cout<<"contre 15 gold"<< "            Vous avez actuellement " << Hero.getGold() <<" Gold"<<std::endl<<"Y/N"<<std::endl;
            ch = _getch();
            switch (ch)
            {
            case 'y':
                if(Hero.getGold()>15)
                {
                    inventaire.addItem(mp1);
                    Hero.setGold(Hero.getGold()-15);
                    std::cout<<"ceci est maintenant dans votre inventaire"<<std::endl;
                    Sleep(2000);
                    system("cls");
                }
                else
                {
                    std::cout<<"Vous n'avez pas les moyens"<<std::endl;
                    Sleep(2000);
                    system("cls");
                }
                break;
            case 'n':
                std::cout<<"vous passez votre chemain"<<std::endl;
                Sleep(2000);
                system("cls");
                break;
            default:
                std::cout<<"vous passez votre chemain"<<std::endl;
                Sleep(2000);
                system("cls");
            }
            break;
        case 4:
            std::cout<<vup1;
            std::cout<<"contre 20 gold"<< "            Vous avez actuellement " << Hero.getGold() <<" Gold"<<std::endl<<"Y/N"<<std::endl;
            ch = _getch();
            switch (ch)
            {
            case 'y':
                if(Hero.getGold()>15)
                {
                    inventaire.addItem(vup1);
                    Hero.setGold(Hero.getGold()-20);
                    std::cout<<"ceci est maintenant dans votre inventaire"<<std::endl;
                    Sleep(2000);
                    system("cls");
                }
                else
                {
                    std::cout<<"Vous n'avez pas les moyens"<<std::endl;
                    Sleep(2000);
                    system("cls");
                }
                break;
            case 'n':
                std::cout<<"vous passez votre chemain"<<std::endl;
                Sleep(2000);
                system("cls");
                break;
            default:
                std::cout<<"vous passez votre chemain"<<std::endl;
                Sleep(2000);
                system("cls");
            }
            break;
        default:
            std::cout<<hp1;
            std::cout<<"contre 15 gold"<< "            Vous avez actuellement " << Hero.getGold() <<" Gold"<<std::endl<<"Y/N"<<std::endl;
            ch = _getch();
            switch (ch)
            {
            case 'y':
                if(Hero.getGold()>15)
                {
                    inventaire.addItem(hp1);
                    Hero.setGold(Hero.getGold()-15);
                    std::cout<<"ceci est maintenant dans votre inventaire"<<std::endl;
                    Sleep(2000);
                    system("cls");
                }
                else
                {
                    std::cout<<"Vous n'avez pas les moyens"<<std::endl;
                    Sleep(2000);
                    system("cls");
                }
                break;
            case 'n':
                std::cout<<"vous passez votre chemain"<<std::endl;
                Sleep(2000);
                system("cls");
                break;
            default:
                std::cout<<"vous passez votre chemain"<<std::endl;
                Sleep(2000);
                system("cls");
            }
            break;
        }
        break;
    case 11:
        objet = treasure1.roomEffect();
        std::cout<<"Vous trouvez un coffre avec ";
        switch (objet)
        {
        case 1:
            std::cout<<a1;
            inventaire.addItem(a1);
            break;
        case 2:
            std::cout<<hp1;
            inventaire.addItem(hp1);
            break;
        case 3:
            std::cout<<mp1;
            inventaire.addItem(mp1);
            break;
        case 4:
            std::cout<<vup1;
            inventaire.addItem(vup1);
            break;
        case 5:
            std::cout<<aa1;
            inventaire.addItem(aa1);
            break;
        case 6:
            std::cout<<am1;
            inventaire.addItem(am1);
            break;
        case 7:
            std::cout<<af1;
            inventaire.addItem(af1);
            break;
        case 8:
            std::cout<<ea1;
            inventaire.addItem(ea1);
            break;
        case 9:
            std::cout<<em1;
            inventaire.addItem(em1);
            break;
        case 10:
            std::cout<<ef1;
            inventaire.addItem(ef1);
            break;
        case 11:
            std::cout<<a1;
            inventaire.addItem(a1);
            break;
        case 12:
            std::cout<<hp1;
            inventaire.addItem(hp1);
            break;
        case 13:
            std::cout<<mp1;
            inventaire.addItem(mp1);
            break;
        case 14:
            std::cout<<vup1;
            inventaire.addItem(vup1);
            break;
        default:
            std::cout<<hp1;
            inventaire.addItem(hp1);
            break;
        }
        break;
    default:
        nothing1.roomEffect();
        Sleep(2000);
        system("cls");
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
    Player Hero;
    RoiDemon rd;
    Inventaire heroInventaire;
    Hero.setName(name);
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
            spawnRoom(Hero,heroInventaire);
            break;
        case 'e':
            fight(Hero, rd, heroInventaire);
            break;
        default:
            std::cout<<"Entrer invalide";
            Sleep(2000);
        }
    }
}