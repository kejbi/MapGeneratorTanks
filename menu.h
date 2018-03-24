//
// Created by biega on 10.03.2018.
//

#ifndef TANKSMAPGENERATOR_MENU_H
#define TANKSMAPGENERATOR_MENU_H

#include "map.h"
#include "objectmap.h"
#include "inputvalidator.h"
#include "mapreader.h"
#include "mapconverter.h"
#include "mapmodificator.h"

class Menu{

public:
    void run();
private:
    Map* map= nullptr;
    InputValidator iv;
    MapReader mr;
    MapConverter mc;
    MapModificator mm;
    ObjectMap* objectmap= nullptr;
    int choice, running=1, sizein, x, y;
    char new_symbol;
    std::string file_name;
    std::fstream file;
    void showOptions();
    void readChoice(int a, int b);
    void readSize(int a);
    void readCoordinates();
    void readSymbol();
    void generating();
    void reading();
    void writing();
    void readName();
    void modifying();
    void display();
    void exporting();
    void testing();
    void quit();
};
#endif //TANKSMAPGENERATOR_MENU_H
