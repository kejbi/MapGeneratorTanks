//
// Created by biega on 19.03.2018.
//

#ifndef TANKSMAPGENERATOR_INPUTVALIDATOR_H
#define TANKSMAPGENERATOR_INPUTVALIDATOR_H

#include "map.h"
#include <fstream>

class InputValidator{
public:
    //tests return 1 if correct, 0 if not
    int symbolTest(std::vector <std::string> tab); //checks if symbols in map are correct
    int sizeTest(std::vector <std::string> tab); //checks if map is a square
    int numberTest(int a, int b, int in); //checks if the number is from range [a,b]
    int numberTest(int a, int in); //overload method, checks if number is  from range [a, infinity]
    int singleSymbolTest(char a); // checks if input symbol is correct
    int fileTest(std::fstream& file, std::string name); //checks if file exists
    int isMap(Map* m); //checks if map is initialized
};

#endif //TANKSMAPGENERATOR_TESTS_H
