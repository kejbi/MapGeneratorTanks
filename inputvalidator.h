//
// Created by biega on 19.03.2018.
//

#ifndef TANKSMAPGENERATOR_INPUTVALIDATOR_H
#define TANKSMAPGENERATOR_INPUTVALIDATOR_H

#include "map.h"
#include <fstream>

class InputValidator{
public:
    int symbolTest(std::vector <std::string> tab);
    int sizeTest(std::vector <std::string> tab);
    int numberTest(int a, int b, int in);
    int numberTest(int a, int in);
    int singleSymbolTest(char a);
    int fileTest(std::fstream& file, std::string name);
    int isMap(Map* m);
};

#endif //TANKSMAPGENERATOR_TESTS_H
