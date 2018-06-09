#include <iostream>
#include <string>
#include "Carnivoros.h"
#include "Tyranosaurio.h"

using namespace std;

Tyranosaurio::Tyranosaurio(string pNombre, int pAltura, double pPeso, string pFecha, string pSexo, double pLongitud, string pOrgano, 
string pCoc, int pColmillos, 
int pConsumo):Carnivoros(pNombre,pAltura, pPeso, pFecha, pSexo,pLongitud, pOrgano, 
 pCoc, pColmillos, 
pConsumo){
    colmillos = pColmillos;
    consumo = pConsumo;
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