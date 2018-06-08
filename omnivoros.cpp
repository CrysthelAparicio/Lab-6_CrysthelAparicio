#include "omnivoros.h"
#include "Dinosaurio.h"
#include <iostream>
#include <string>

using std::string;

omnivoros:: omnivoros(int m, int c):Dinosaurio(string pNombre, int pAltura, double pPeso, string pFecha, string pSexo, double pLongitud){
    n_molares = m;string;
    n_colmillos = c;
    this->pNombre = pNombre;
    this->pAltura = pAltura;
    this->pPeso = pPeso;
    this->pFecha = pFecha;
    this->pSexo = pSexo;
    this->pLongitud = pLongitud;

}


int omnivoros::getNumeroMolares(){

    return n_molares;
}

int omnivoros::getNumeroComillos(){

    return n_colmillos;
}

void omnivoros::setNumeroMolares(int m){
   n_molares = m;
}

void omnivoros::setNumeroColmillos(int c){
    n_colmillos = c;
}