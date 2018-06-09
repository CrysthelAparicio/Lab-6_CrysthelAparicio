#include <iostream>
#include <string>
#include "Dinosaurio.h"
#include "Carnivoros.h"
using namespace std;

Carnivoros::Carnivoros(string pOrgano, 
string pCoc):Dinosaurio(string pNombre, int pAltura, double pPeso, string pFecha, 
string pSexo, double pLongitud){
    organo = pOrgano;
    coc = pCoc;
    this->pNombre=pNombre;
    this->pAltura=pAltura;
    this->pPeso=pPeso;
    this->pFecha=pFecha;
    this->pSexo=pSexo;
    this->pLongitud=pLongitud;
}

string Carnivoros::getOrgano(){
    return organo;
}

void Carnivoros::setOrgano(string pOrgano){
    organo = pOrgano;
}

//////////////////

string Carnivoros::getCoc(){
    return coc;
}

void Carnivoros::setCoc(string pCoc){
    coc = pCoc;
}