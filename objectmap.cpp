//
// Created by biega on 24.03.2018.
//

#include <stddef.h>
#include "objectmap.h"
int ObjectMap::getSize() {
    return objsize;
}

ObjectMap::ObjectMap() {
    objsize=0;

}
Tile ***ObjectMap::getObjMap() {
    return objectmap;
}

