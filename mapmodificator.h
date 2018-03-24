//
// Created by biega on 22.03.2018.
//

#ifndef TANKSMAPGENERATOR_MAPMODIFICATOR_H
#define TANKSMAPGENERATOR_MAPMODIFICATOR_H

#include "map.h"

class MapModificator {
public:
    Map* generateMap(int level, int size);
    Map* modify(int x, int y, char a, Map* m);
    Map* freeMemory(Map* m);
};
#endif //TANKSMAPGENERATOR_MAPMODIFICATOR_H
