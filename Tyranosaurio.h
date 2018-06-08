#ifndef TYRANO_H
#define TYRANO_H
#include <string>
#include <iostream>
#include "Carnivoros.h"
using std::string;

class Tyranosaurio:public Carnivoros{
    private: 
    int colmillos;
    int consumo;

    public:
    Tyranosaurio(string,int,int,string,string,int,string,string,int,int);

    int getColmillos();
    int getConsumo();
    
    void setColmillos(int);
    void setConsumo(int);    
};
#endif