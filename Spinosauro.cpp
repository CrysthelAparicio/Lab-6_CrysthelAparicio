#include <iostream>
#include <string>
#include "Dinosaurio.h"
#include "Carnivoros.h"
#include "Spinosauro.h"

using namespace std;

Tyranosaurio::Tyranosaurio(int pColmillos, 
int pConsumo):Carnivoros(string pOrgano, 
string pCoc){
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