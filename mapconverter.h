//
// Created by biega on 23.03.2018.
//

#ifndef TANKSMAPGENERATOR_MAPCONVERTER_H
#define TANKSMAPGENERATOR_MAPCONVERTER_H

#include "tile.h"
#include "map.h"
#include "objectmap.h"


class MapConverter{
public:
    ObjectMap* exportMap(Map* m);
    ObjectMap* freeMemory(ObjectMap* om);
};




#endif //TANKSMAPGENERATOR_MAPCONVERTER_H
