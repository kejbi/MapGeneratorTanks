//
// Created by biega on 22.03.2018.
//

#ifndef TANKSMAPGENERATOR_MAPREADER_H
#define TANKSMAPGENERATOR_MAPREADER_H

#include <iostream>
#include "map.h"

class MapReader {
public:
    Map* read(std::string name, std::fstream& file); //reads symbol map from file
    void write(std::string name, Map* map); // writes map to file without coordiantes, just like map to read
    void writeOnlyViewMode(std::string name, Map* map); // writes map to file with coordinates, we can't read it to program
};
#endif //TANKSMAPGENERATOR_MAPREADER_H
