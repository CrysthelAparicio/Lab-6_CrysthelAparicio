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
    Spinosauro(double,double);

    double getAlturaEspina();
    double getLongitudBrazo();

    void setAlturaEspina(double);
    void setLongitudBrazo(double);
};
#endif