//
// Created by biega on 10.03.2018.
//

#include <iostream>
#include "menu.h"
#include "mapmodificator.h"
#include "mapreader.h"
#include "mapconverter.h"
#include "test.h"


void Menu::run() {
    std::cout<<"====*====TANKS MAP GENERATOR====*====\nKacper Biegajski 2018"<<std::endl;
    while(running){
        showOptions();
        readChoice(1,8);
        switch(choice){
            case 1:
                generating();
                break;
            case 2:
                reading();
                break;
            case 3:
                writing();
                break;
            case 4:
                modifying();
                break;
            case 5:
                exporting();
                break;
            case 6:
                display();
                break;
            case 7:
                testing();
                break;
            case 8:
                quit();
                break;

        }
    }

}

void Menu::reading() {
    std::cout<<"Enter the file name:"<<std::endl;
    readName();
    map=mr.read(file_name,file);
    if(!(iv.sizeTest(map->getMap()))){
        map= nullptr;
        return;
    }
    if(!(iv.symbolTest(map->getMap())))
    {
        map= nullptr;
        return;
    }
}

void Menu::showOptions() {
    std::cout<<"1. Generate map\n2. Read map from file\n3. Write map to file\n4. Modify map\n"
            "5. Export to object map\n6. Display map (only size<=20)\n7. Test\n8. Exit"<<std::endl;

}

void Menu::readChoice(int a, int b) {
    do{
        std::cin>>choice;
    }
    while(!(iv.numberTest(a,b,choice)));
}


void Menu::generating() {
    if(map!= nullptr) {
        map = mm.freeMemory(map);
    }
    std::cout<<"Choose level:\n1. Easy\n2. Medium\n3. Hard"<<std::endl;
    readChoice(1,3);
    std::cout<<"Enter the size of the map"<<std::endl;
    readSize(1);
    map=mm.generateMap(choice,sizein);
}

void Menu::writing() {
    std::cout<<"1. ReadMode\n2. OnlyViewMode"<<std::endl;
    readChoice(1,2);
    std::cout<<"Enter the file name"<<std::endl;
    std::cin>>file_name;
    if(choice==1){
        mr.write(file_name,map);
    }
    else{
        mr.writeOnlyViewMode(file_name,map);
    }
}

void Menu::readSize(int a) {
    do{
        std::cin>>sizein;
    }
    while(!(iv.numberTest(a,sizein)));
}

void Menu::readName() {
    do{
        std::cin>>file_name;
    }
    while(!(iv.fileTest(file,file_name)));
}

void Menu::modifying() {
    if(iv.isMap(map)){
        readCoordinates();
        std::cout<<"Enter the new symbol"<<std::endl;
        readSymbol();
        map=mm.modify(x,y,new_symbol,map);
    }
}

void Menu::readCoordinates() {
    std::cout<<"Enter co-ordinates of modified tile (x y):"<<std::endl;
    do{
        std::cin>>x>>y;
    }
    while(!(iv.numberTest(1,map->getSize(),x)) || !(iv.numberTest(1,map->getSize(),y)));
}

void Menu::readSymbol() {
    do{
        std::cin>>new_symbol;
    }
    while(!(iv.singleSymbolTest(new_symbol)));

}

void Menu::display() {
    if(iv.isMap(map)){
        if(map->getSize()>20){
            std::cout<<"Map is too big to display in terminal, "
                    "better use writeOnlyViewMode"<<std::endl;
        }
        else{
            std::cout<<map;
        }
    }

}

void Menu::exporting() {
    if(iv.isMap(map)){
        if(objectmap== nullptr){
            objectmap=mc.exportMap(map);
        }
        else{
            objectmap=mc.freeMemory(objectmap);
            objectmap=mc.exportMap(map);
        }
    }
    for(int i=0;i<map->getSize();i++){
        for(int j=0;j<map->getSize();j++){
            //std::cout<<n->getObjMap()[i][j]->getSymbol();
            if(objectmap->getObjMap()[i][j]->getSymbol()!=map->getMap()[i][j]){
                std::cout<<"cos nie tak kacper";
            }
        }
    }

}

void Menu::testing() {
    Test t;
    t.runTests();

}

void Menu::quit() {
    if(map!= nullptr){
        map=mm.freeMemory(map);
    }
    if(objectmap!= nullptr) {
        objectmap=mc.freeMemory(objectmap);
    }
    running=0;
}


