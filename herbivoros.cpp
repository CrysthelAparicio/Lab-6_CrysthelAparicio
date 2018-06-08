#include "herbivoros.h"
#include "Dinosaurio.h"
#include <iostream>
using namespace std;


herbivoros::herbivoros(string nombre, int altura, int peso, string fechaCreacion, string sexo, int longitud, string tipo, int incisivos)
:Dinosaurio(nombre, altura, peso, fechaCreacion, sexo, longitud){
  this->tipo = tipo;
  this->incisivos = incisivos;
}

string herbivoros::getTipo(){
  return tipo;
}

int herbivoros::getIncisivos(){
  return incisivos;
}

void herbivoros::setIncisivos(int incisivos){
    this->incisivos = incisivos;
}

void herbivoros::setTipo(string tipo){
    this->tipo = tipo;
}

