//
// Created by biega on 10.03.2018.
//

#ifndef TANKSMAPGENERATOR_BRICKS_H
#define TANKSMAPGENERATOR_BRICKS_H

#include "tile.h"

class Bricks: public Tile{
private:
    int hp;
public:
    Bricks(int a, int b);
    void onHit() override;
    void onHover() override;
    void destroyed();

};
#endif //TANKSMAPGENERATOR_BRICKS_H
