#include <iostream>
#include <string>
#include "Dinosaurio.h"
#include "Marinos.h"

using namespace std;
Marinos::Marinos(int pNumAletas, string pTipo){
    numAletas = pNumAletas;
    tipo = pTipo;
}

//////////////
int Marinos::getNumAletas(){
    return numAletas;
}

void Marinos::setNumAletas(int pNumAletas){
    numAletas = pNumAletas;
}

//////////////7
string Marinos::getTipo(){
    return tipo;
}

void Marinos::setTipo(string pTipo){
    tipo = pTipo;
}
