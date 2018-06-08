#include <iostream>
#include <string>
#include "Carnivoros.h"
#include "Tyranosaurio.h"

using namespace std;

Tyranosaurio::Tyranosaurio(int pColmillos, 
int pConsumo):Carnivoros(pOrgano,pCoc){
    colmillos = pColmillos;
    consumo = pConsumo;
    this->pOrgano=pOrgano;
    this->pCoc=pCoc;
}

int Tyranosaurio::getColmillos(){
    return colmillos;
}

void Tyranosaurio::setColmillos(int pColmillos){
    colmillos = pColmillos;
}

//////////////////7

int Tyranosaurio::getConsumo(){
    return consumo;
}

void Tyranosaurio::setConsumo(int pConsumo){
    consumo = pConsumo;
}