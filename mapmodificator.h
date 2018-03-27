//
// Created by biega on 22.03.2018.
//

#ifndef TANKSMAPGENERATOR_MAPMODIFICATOR_H
#define TANKSMAPGENERATOR_MAPMODIFICATOR_H

#include "map.h"

class MapModificator {
public:
    Map* generateMap(int level, int size); //generates symbol map
    Map* modify(int x, int y, char a, Map* m); //modifyies a symbol of coordinates (x,y) to the symbol a
    Map* freeMemory(Map* m); //free memory allocated for object map
};
#endif //TANKSMAPGENERATOR_MAPMODIFICATOR_H
