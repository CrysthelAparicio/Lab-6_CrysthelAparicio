#ifndef OVIRAPTOR_H
#define OVIRAPTOR_H
#include "omnivoros.h"
#include <iostream>
#include "Dinosaurio.h"
using namespace std;

class oviraptor: public omnivoros{
  public:
    int alturaCresta;
    bool plumaje;

  public:
    oviraptor();
    oviraptor(string, int, int, string, string, int, int, int, int, bool);
    int getalturaCresta();
    bool getPlumaje();
    void setAlturaCresta(int);
    void setPlumaje(bool);
};
#endif