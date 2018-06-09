#include "omnivoros.h"
#include <iostream>
#include "Dinosaurio.h"
using namespace std;

omnivoros::omnivoros(){

}

omnivoros::omnivoros(string nombre, int altura, int peso, string fechaCreacion, string sexo, int longitud, int numeroColmillos, int numeroMolares)
:Dinosaurio(nombre, altura, peso, fechaCreacion, sexo, longitud){
  this->numeroColmillos = numeroColmillos;
  this->numeroMolares = numeroMolares;
}

int omnivoros::getnumeroMolares(){
  return numeroMolares;
}

int omnivoros::getnumeroColmillos(){
  return numeroColmillos;
}

void omnivoros::toString(){

}

void omnivoros::setNumeroMolares(int numeroMolares){
  this->numeroMolares = numeroMolares;
}

void omnivoros::setNumeroColmillos(int numeroColmillos){
  this->numeroColmillos = numeroColmillos;
}