//
// Created by biega on 22.03.2018.
//

#include <fstream>
#include "mapreader.h"


Map* MapReader::read(std::string name, std::fstream& file){
    std::string line;
    Map* map;
    map=new Map();
    map->size=0;
    map->tab.resize(0);
    file.open(name, std::ios::in);

    while(std::getline(file,line)){
        map->size++;
        map->tab.resize(map->size);
        map->tab[map->size-1]=line;
    }
    file.close();
    return map;
}

void MapReader::write(std::string name, Map* map){
    std::fstream file;
    file.open(name,std::ios::out);
    for(int i=0;i<map->size;i++){
        for(int j=0;j<map->size;j++){
            file<<map->tab[i][j];
        }
        file<<std::endl;
    }
    file.close();
}

void MapReader::writeOnlyViewMode(std::string name, Map* map){
    std::fstream file;
    file.open(name,std::ios::out);
    file<<map;
    file.close();
}