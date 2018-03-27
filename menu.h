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
    Map* map= nullptr; //pointer to map using in program
    InputValidator iv; //used to validating
    MapReader mr; //used to reading/writing to file
    MapConverter mc; //used to converitng
    MapModificator mm; //used to modifying
    ObjectMap* objectmap= nullptr;// pointer to object map
    int choice, running=1, sizein, x, y; //input ints and running tells if program is running or not
    char new_symbol; //input char
    std::string file_name; //input string
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
