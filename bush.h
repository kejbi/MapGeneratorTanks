//
// Created by biega on 10.03.2018.
//

#ifndef TANKSMAPGENERATOR_BUSH_H
#define TANKSMAPGENERATOR_BUSH_H

#include "tile.h"

class Bush: public Tile{
public:
    Bush(int a, int b);
    void onHit() override;
    void onHover() override;
};
#endif //TANKSMAPGENERATOR_BUSH_H
