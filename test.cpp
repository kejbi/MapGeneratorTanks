//
// Created by biega on 22.03.2018.
//

#include <iostream>
#include <fstream>
#include "test.h"
#include "map.h"
#include "mapmodificator.h"
#include "mapreader.h"
#include "objectmap.h"
#include "mapconverter.h"

int Test::symbolTest() {
    Map* m;
    MapModificator mm;
    m=mm.generateMap(3,15);
    for(int i=0;i<m->getMap().size();i++){
        for(int j=0;j<m->getMap()[i].length();j++){
            if(m->getMap()[i][j]!='U' && m->getMap()[i][j]!='#' && m->getMap()[i][j]!='H' && m->getMap()[i][j]!='O' && m->getMap()[i][j]!='@' && m->getMap()[i][j]!='M'){
                m=mm.freeMemory(m);
                return 0;
            }
        }
    }
    m=mm.freeMemory(m);
    return 1;

}

int Test::sizeTest() {
    Map* m;
    MapModificator mm;
    m=mm.generateMap(3,15);
    for(int i=1;i<m->getMap().size();i++){
        if(m->getMap()[i-1].length()!=m->getMap()[i].length()){
            m=mm.freeMemory(m);
            return 0;
        }
    }
    m=mm.freeMemory(m);
    return 1;
}

int Test::writeReadTest() {
    Map* m;
    Map* n;
    std::fstream file;
    MapModificator mm;
    m=mm.generateMap(3,15);
    MapReader mr;
    mr.write("test_auto.txt",m);
    n=mr.read("test_auto.txt",file);
    if(m->getSize()!=n->getSize()){
        m=mm.freeMemory(m);
        return 0;
    }
    else{
        for(int i=0;i<m->getSize();i++){
            for(int j=0;j<m->getSize();j++){
                if(m->getMap()[i][j]!=n->getMap()[i][j]){
                    m=mm.freeMemory(m);
                    n=mm.freeMemory(n);
                    return 0;
                }
            }
        }
    }
    m=mm.freeMemory(m);
    n=mm.freeMemory(n);
    return 1;
}

int Test::objectMapTest() {
    Map* m;
    MapModificator mm;
    m=mm.generateMap(3,15);
    ObjectMap* n;
    MapConverter mc;
    n=mc.exportMap(m);
    for(int i=0;i<15;i++){
        for(int j=0;j<15;j++){
            //std::cout<<n->getObjMap()[i][j]->getSymbol();
            if(n->getObjMap()[i][j]->getSymbol()!=m->getMap()[i][j]){
                m=mm.freeMemory(m);
                n=mc.freeMemory(n);
                return 0;
            }
        }
    }
    m=mm.freeMemory(m);
    n=mc.freeMemory(n);
    return 1;
}

void Test::runTests() {
    if(!symbolTest()){
        std::cout<<"Error (symbol test)"<<std::endl;
    }
    else{
        std::cout<<"Symbol test: Success"<<std::endl;
    }
    if(!sizeTest()){

        std::cout<<"Error (size test)"<<std::endl;
    }
    else{
        std::cout<<"Size test: Success"<<std::endl;
    }
    if(!writeReadTest()){
        std::cout<<"Error (write/read test)"<<std::endl;
    }
    else{
        std::cout<<"Write/read test: Success"<<std::endl;
    }
    if(!objectMapTest()){
        std::cout<<"Error (object map test)"<<std::endl;
    }
    else{
        std::cout<<"Object Map test: Success"<<std::endl;
    }

}

void Test::memoryTest() {
    Map* m;
    MapModificator mm;
    m=mm.generateMap(2,5);
    m=mm.freeMemory(m);
    m=mm.generateMap(1,12);

    ObjectMap* om;
    MapConverter mc;

    om=mc.exportMap(m);
    om=mc.freeMemory(om);
    m=mm.freeMemory(m);


}
