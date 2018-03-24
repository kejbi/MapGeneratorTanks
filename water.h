//
// Created by biega on 10.03.2018.
//

#ifndef TANKSMAPGENERATOR_WATER_H
#define TANKSMAPGENERATOR_WATER_H

#include "tile.h"

class Water: public Tile{
public:
    Water(int a, int b);
    void onHit() override;
    void onHover() override;
};
#endif //TANKSMAPGENERATOR_WATER_H
