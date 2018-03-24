//
// Created by biega on 10.03.2018.
//

#ifndef TANKSMAPGENERATOR_ICE_H
#define TANKSMAPGENERATOR_ICE_H

#include "tile.h"

class Ice: public Tile{
public:
    Ice(int a, int b);
    void onHit() override;
    void onHover() override;
};
#endif //TANKSMAPGENERATOR_ICE_H
