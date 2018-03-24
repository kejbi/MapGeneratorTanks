//
// Created by biega on 22.03.2018.
//

#ifndef TANKSMAPGENERATOR_MAPREADER_H
#define TANKSMAPGENERATOR_MAPREADER_H

#include <iostream>
#include "map.h"

class MapReader {
public:
    Map* read(std::string name, std::fstream& file);
    void write(std::string name, Map* map);
    void writeOnlyViewMode(std::string name, Map* map);
};
#endif //TANKSMAPGENERATOR_MAPREADER_H
