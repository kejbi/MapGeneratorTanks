//
// Created by biega on 15.03.2018.
//

#ifndef TANKSMAPGENERATOR_TILE_H
#define TANKSMAPGENERATOR_TILE_H

class Tile{
protected:
    int x, y; //coordinates
    char symbol; //symbol of tile
    bool walkable; //tells if tank can hover the tile
public:
    virtual void onHit()=0; //virtual metod, every tile reacts differently for event on hit
    virtual void onHover()=0; //virtual metod, every tile reacts differently for event on hover
    char getSymbol(); //virtual metod, returns a tile symbol
};
#endif //TANKSMAPGENERATOR_TILE_H
