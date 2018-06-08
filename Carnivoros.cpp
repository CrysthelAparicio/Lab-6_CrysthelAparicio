#include <iostream>
#include <string>
#include "Dinosaurio.h"
#include "Carnivoros.h"
using namespace std;

Carnivoros::Carnivoros(string nombre, int altura, int peso, string fechaCreacion, string sexo, int longitud,string organo,string tipo):
Dinosaurio(nombre,altura,peso,fechaCreacion,sexo,longitud){
    this->organo = organo;
    this->coc = tipo;
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