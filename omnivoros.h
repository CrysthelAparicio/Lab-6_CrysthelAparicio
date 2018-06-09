#ifndef OMNIVOROS_H
#define OMNIVOROS_H
#include <iostream>
#include "Dinosaurio.h"
using namespace std;

class omnivoros:public Dinosaurio{

  public:
      int numeroMolares;
      int numeroColmillos;

  public:
    omnivoros();
    omnivoros(string, int, int, string, string, int, int, int);
    int getnumeroMolares();
    int getnumeroColmillos();
    virtual void toString() = 0;

};
#endif