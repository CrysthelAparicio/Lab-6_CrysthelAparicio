#ifndef SPYNO_H
#define SPYNO_H
#include <string>
#include <iostream>
#include "Carnivoros.h"
using std::string;

class Spinosauro:public Carnivoros{
    private: 
    double alturaEspina;
    double longitudBrazo;

    public:
    Spinosauro(string,int,int,string,string,int,string,string,int,int);

    double getAlturaEspina();
    double getLongitudBrazo();

    void setAlturaEspina(double);
    void setLongitudBrazo(double);
};
#endif