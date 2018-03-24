//
// Created by biega on 10.03.2018.
//

#include "bricks.h"

Bricks::Bricks(int a, int b) {
    x=a;
    y=b;
    symbol='H';
    walkable= false;
    hp=100;
}

void Bricks::onHit() {
    //animation();
    hp-=25;
}

void Bricks::onHover() {
    //some functions

}

void Bricks::destroyed() {
    symbol='U';
    walkable= true;

}
