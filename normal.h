//
// Created by biega on 10.03.2018.
//

#ifndef TANKSMAPGENERATOR_NORMAL_H
#define TANKSMAPGENERATOR_NORMAL_H

#include "tile.h"

class Normal:public Tile {
public:
    Normal(int a, int b);

    void onHit() override;

    void onHover() override;

};
#endif //TANKSMAPGENERATOR_NORMAL_H
