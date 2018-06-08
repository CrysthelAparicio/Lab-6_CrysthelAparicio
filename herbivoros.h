#ifndef HERBIVOROS_H
#define HERBIVOROS_H
#include <iostream>
using namespace std;
#include "Dinosaurio.h"

class herbivoros:public Dinosaurio{

  public:
    string tipo;
    int incisivos;

  public:
  
    herbivoros(string, int, int, string, string, int,string,int);
    string getTipo();
    int getIncisivos();
    void setTipo(string);
    void setIncisivos(int);
  

};
#endif