#include <iostream>
#include <string>
#include "Carnivoros.h"
#include "Spinosauro.h"
#include "Dinosaurio.h"

using namespace std;

Spinosauro::Spinosauro(string nombre, int altura, int peso, string fechaCreacion, string sexo, int longitud,string organo,string tipo,int alturaEspina,int longBrazos):
Carnivoros(nombre,altura,peso,fechaCreacion,sexo,longitud,organo,tipo){
    this->alturaEspina=alturaEspina;
    this->longitudBrazo=longBrazos;
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