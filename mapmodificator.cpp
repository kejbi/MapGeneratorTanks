//
// Created by biega on 22.03.2018.
//

#include "mapmodificator.h"
Map* MapModificator::modify(int x, int y, char a, Map* map) {
    map->tab[y-1][x-1]=a;
    return map;
}

Map* MapModificator::generateMap(int level, int s){
    Map* newmap;
    newmap= new Map();
    newmap->setSize(s);
    newmap->tab.resize(s);
    char temp[s];
    std::string freq_easy = "UUUUUUUUUUUUUU###HHO";
    std::string freq_medium = "UUUUUUUUU####HHHHOOM";
    std::string freq_hard = "UUUUUUU###HHHHOOOMM@";
    switch (level){
        case 1:
            for(int i=0;i<s;i++){
                for(int j=0;j<s;j++)
                {
                    temp[j]=freq_easy[rand()%20];
                }
                newmap->tab[i]=std::string(temp);
            }
            break;
        case 2:
            for(int i=0;i<s;i++){
                for(int j=0;j<s;j++)
                {
                    temp[j]=freq_medium[rand()%20];
                }
                newmap->tab[i]=std::string(temp);
            }
            break;
        case 3:
            for(int i=0;i<s;i++){
                for(int j=0;j<s;j++)
                {
                    temp[j]=freq_hard[rand()%20];
                }
                newmap->tab[i]=std::string(temp);
            }
            break;
    }
    return newmap;
}

Map *MapModificator::freeMemory(Map *m) {
    delete m;
    return nullptr;
}
