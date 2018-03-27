//
// Created by biega on 10.03.2018.
//

#ifndef TANKSMAPGENERATOR_BRICKS_H
#define TANKSMAPGENERATOR_BRICKS_H

#include "tile.h"

class Bricks: public Tile{ //a brick tile in map
private:
    int hp; //health points of tile
public:
    Bricks(int a, int b);
    void onHit() override;
    void onHover() override;
    void destroyed(); //what happens when hp=0;

};
#endif //TANKSMAPGENERATOR_BRICKS_H
