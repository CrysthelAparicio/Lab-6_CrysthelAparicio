#ifndef AEREOS_H
#define AEREOS_H
#include "Dinosaurio.h"
#include<iostream>
using namespace std;

class aereos:public Dinosaurio {

  public:

    bool vuela;
    bool plumas;

  public:

    aereos();
    aereos(string, int, int , string, string, int, bool, bool);
    bool getVuela();
    bool getPlumas();
    void getVuela(bool);
    void getPlumas(bool);
    virtual void toString();
};
#endif