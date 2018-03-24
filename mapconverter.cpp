//
// Created by biega on 23.03.2018.
//

#include "mapconverter.h"
#include "normal.h"
#include "bush.h"
#include "rocks.h"
#include "water.h"
#include "ice.h"

ObjectMap* MapConverter::exportMap(Map* m) {
    ObjectMap *om;
    om = new ObjectMap();
    om->objsize = m->getSize();
    om->objectmap = new Tile **[m->getSize()];
    for (int i = 0; i < m->getSize(); i++) {
        om->objectmap[i] = new Tile *[m->getSize()];
        for (int j = 0; j < m->getSize(); j++) {
            if (m->getMap()[i][j] == 'U') {
                om->objectmap[i][j] = new Normal(i+1, j+1);
            }
            if (m->getMap()[i][j] == '#') {
                om->objectmap[i][j] = new Bush(i+1, j+1);
            }
            if (m->getMap()[i][j] == 'H') {
                om->objectmap[i][j] = new Bricks(i+1, j+1);
            }
            if (m->getMap()[i][j] == 'O') {
                om->objectmap[i][j] = new Rocks(i+1, j+1);
            }
            if (m->getMap()[i][j] == 'M') {
                om->objectmap[i][j] = new Water(i+1, j+1);
            }
            if (m->getMap()[i][j] == '@') {
                om->objectmap[i][j] = new Ice(i+1, j+1);
            }
        }
    }
    return om;
}

ObjectMap* MapConverter::freeMemory(ObjectMap* om) {
    for(int i=0;i<om->objsize;i++){
        for(int j=0;j<om->objsize;j++){
            delete om->objectmap[i][j];
        }
        delete [] om->objectmap[i];
    }

    delete [] om->objectmap;
    delete om;
    return nullptr;

}
