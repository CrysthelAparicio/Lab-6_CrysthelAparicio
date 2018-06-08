#ifndef CARNIVORO_H
#define CARNIVORO_H
#include "Dinosaurio.h"
#include <string>
#include <iostream>
using std::string;

class Carnivoros:public Dinosaurio{
    private: 
    string organo; //dientes o garras
    string coc; //cazador o carroñero

    public:
    Carnivoros(string,string);
    string getOrgano();
    string getCoc();

    void setOrgano(string);
    void setCoc(string);
};
#endif