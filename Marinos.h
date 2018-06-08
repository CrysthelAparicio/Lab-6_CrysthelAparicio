#ifndef MARINOS_H
#define MARINOS_H
#include <string>
#include <iostream>
using std::string;

class Marinos{
    private: 
    int numAletas;
    string tipo; //terrestre o marino

    public:
    Marinos(int,string);
};
#endif