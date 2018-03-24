//
// Created by biega on 15.03.2018.
//

#ifndef TANKSMAPGENERATOR_TILE_H
#define TANKSMAPGENERATOR_TILE_H

class Tile{
protected:
    int x, y;
    char symbol;
    bool walkable;
public:
    virtual void onHit()=0;
    virtual void onHover()=0;
    char getSymbol();
};
#endif //TANKSMAPGENERATOR_TILE_H
