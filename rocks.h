//
// Created by biega on 10.03.2018.
//

#ifndef TANKSMAPGENERATOR_ROCKS_H
#define TANKSMAPGENERATOR_ROCKS_H

#include "tile.h"

class Rocks: public Tile{
public:
    Rocks(int a, int b);
    void onHit() override;
    void onHover() override;
};
#endif //TANKSMAPGENERATOR_ROCKS_H
