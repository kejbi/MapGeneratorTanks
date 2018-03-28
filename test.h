//
// Created by biega on 22.03.2018.
//

#ifndef TANKSMAPGENERATOR_TEST_H
#define TANKSMAPGENERATOR_TEST_H

class Test{
public:
    //tests return 1 if correct, 0 if not
    void runTests(); //runs all tests
    int symbolTest(); //generates symbol map and checks if symbols are correct,
    int sizeTest(); //generates map and checks if size is ok (if map is a square)
    int writeReadTest(); //generates, writes to file and then reads, copmares written and read map
    int objectMapTest(); //generates symbol map, converts it to object map and compares symbols from symbol map with object symbols
    int validatorsTest();
    void memoryTest();
};
#endif //TANKSMAPGENERATOR_TEST_H
