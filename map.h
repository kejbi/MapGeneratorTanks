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
    int size;
    std::vector <std::string> tab;
    friend class MapReader;
    friend class MapModificator;
    friend std::ostream& operator<< (std::ostream&, Map* const&);
public:
    std::vector <std::string> getMap();
    int getSize();
    void setSize(int s);
};

#endif //TANKSMAPGENERATOR_MAP_H
