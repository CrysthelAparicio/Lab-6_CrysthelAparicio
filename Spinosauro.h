#ifndef SPYNO_H
#define SPYNO_H
#include <string>
#include <iostream>
#include "Carnivoros.h"
using std::string;

class Spinosauro:public Carnivoro{
    private: 
    double alturaEspina;
    double longitudBrazo;

    public:
    Spinosauro(double,double);
};
#endif