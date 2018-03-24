//
// Created by biega on 24.03.2018.
//

#ifndef TANKSMAPGENERATOR_OBJECTMAP_H
#define TANKSMAPGENERATOR_OBJECTMAP_H

#include "tile.h"

class ObjectMap{
private:
    Tile*** objectmap;
    int objsize;
    friend class MapConverter;
public:
    int getSize();
    ObjectMap();
    Tile*** getObjMap();

};
#endif //TANKSMAPGENERATOR_OBJECTMAP_H
