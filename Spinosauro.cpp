#include <iostream>
#include <string>
#include "Dinosaurio.h"
#include "Carnivoros.h"
#include "Spinosauro.h"

using namespace std;

Spinosauro::Spinosauro(double pAlturaEspina, 
double pLongitudBrazo):Carnivoros(pOrgano, pCoc){
    alturaEspina = pAlturaEspina;
    longitudBrazo = pLongitudBrazo;
    this->pOrgano=pOrgano;
    this->pCoc=pCos;
}

double Spinosauro::getAlturaEspina(){
    return alturaEspina;
}

void Spinosauro::setAlturaEspina(double pAlturaEspina){
    alturaEspina = pAlturaEspina;
}

//////////////////7

double Spinosauro::getLongitudBrazo(){
    return longitudBrazo;
}

void Spinosauro::setLongitudBrazo(double pLongitudBrazo){
    longitudBrazo = pLongitudBrazo;
}