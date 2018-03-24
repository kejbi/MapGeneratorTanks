//
// Created by biega on 19.03.2018.
//

#include <iostream>
#include "inputvalidator.h"
int InputValidator::symbolTest(std::vector <std::string> tab){
    for(int i=0;i<tab.size();i++){
        for(int j=0;j<tab[i].length();j++){
            if(tab[i][j]!='U' && tab[i][j]!='#' && tab[i][j]!='H' && tab[i][j]!='O' && tab[i][j]!='@' && tab[i][j]!='M'){
                std::cout<<"Error (symbols)"<<std::endl;
                return 0;
            }
        }
    }
    return 1;
}
int InputValidator::sizeTest(std::vector <std::string> tab){
    for(int i=1;i<tab.size();i++){
        if(tab[i-1].length()!=tab[i].length()){
            std::cout<<"Error (size)"<<std::endl;
            return 0;
        }
    }
    return 1;
}
int InputValidator::numberTest(int a, int b, int in) {
    if(in<a || in>b){
        std::cout<<"Wrong number"<<std::endl;
        return 0;
    }
    return 1;
}
int InputValidator::numberTest(int a, int in) {
    if(in<a){
        std::cout<<"Wrong number"<<std::endl;
        return 0;
    }
    return 1;
}
int InputValidator::fileTest(std::fstream& file, std::string name){
    file.open(name,std::ios::in);
    if(file.good()){
        file.close();
        return 1;
    }
    else{
        std::cout<<"File error"<<std::endl;
        file.close();
        return 0;
    }

}
int InputValidator::singleSymbolTest(char a) {
    if(a!='U' && a!='#' && a!='H' && a!='O' && a!='@' && a!='M'){
        std::cout<<"Incorrect symbol"<<std::endl;
        return 0;
    }
    return 1;
}

int InputValidator::isMap(Map* m) {
    if(m->getSize()==0){
        std::cout<<"Can't do anything, because there's no map!"<<std::endl;
        return 0;
    }
    return 1;
}
