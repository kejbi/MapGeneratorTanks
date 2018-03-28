#include <iostream>
#include <vector>
#include <time.h>
#include "map.h"
#include "menu.h"
#include "mapmodificator.h"
#include "test.h"

int main() {
    srand(time(NULL));
    Menu menu;
    menu.run(); //starting menu
//    Test t;
//    t.runTests();//starting tests
//  One of Menu and Test must be commented
    return 0;
}