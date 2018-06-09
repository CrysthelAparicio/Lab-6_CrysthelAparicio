#ifndef MARINOS_H
#define MARINOS_H
#include <iostream>

#include "Dinosaurio.h"

using namespace std;

class Marinos:public Dinosaurio {

  public:
    int numAletas;
    string Tipo;

  public:
    //Constructor
    Marinos();
    Marinos(string,int,int,string,string,int,int,string);
    //Getters
    int getnumAletas();
    string getTipo();

    //Setters
    void setnumAletas(int);
    void setTipo(string);

};
#endif