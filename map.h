//
// Created by biega on 10.03.2018.
//

#ifndef TANKSMAPGENERATOR_MAP_H
#define TANKSMAPGENERATOR_MAP_H

#include <cstdlib>
#include <string>
#include <cstring>
#include <vector>
#include "bricks.h"
//#include "inputvalidator.h"
class Map{
private:
    int size; //size of map
    std::vector <std::string> tab; //contains symbols of map
    friend class MapReader;
    friend class MapModificator;
    friend std::ostream& operator<< (std::ostream&, Map* const&); //on output map with coordinates
public:
    std::vector <std::string> getMap(); //returns vector of strings with symbols of map
    int getSize(); //returns size of map (square map)
    void setSize(int s); //sets size of the map
};

#endif //TANKSMAPGENERATOR_MAP_H
