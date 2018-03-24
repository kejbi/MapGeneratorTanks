//
// Created by biega on 10.03.2018.
//

#include <iostream>
#include "map.h"



std::vector <std::string> Map::getMap() {
    return tab;
}



std::ostream& operator<< (std::ostream& out, Map* const& m){
    out<<"y/x ";
    for(int i=1;i<=m->size;i++) {
        if(i<10) {
            out << i << "  ";
        }
        else{
            out << i << " ";
        }
    }
    out << std::endl << std::endl;
    for(int i=1;i<=m->size;i++){
        if(i>=10) {
            out << i << "  ";
        }
        else{
            out << i << "   ";
        }
        for(int j=0;j<m->tab[i-1].length();j++){
            out << m->tab[i-1][j] << "  ";
        }
        out << std::endl << std::endl;
    }
    return out;
}
int Map::getSize() {
    return size;
}

void Map::setSize(int s) {
    size=s;
}

