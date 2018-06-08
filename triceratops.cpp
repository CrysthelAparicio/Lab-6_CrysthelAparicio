#include "triceratops.h"
#include "herbivoros.h"
#include <iostream>
#include <string>




triceratops::triceratops(string nombre, int altura, int peso, string fechaCreacion, string sexo, int longitud, string tipo, int incisivos, int longitudCuernos, int longitudCuernoNasal)
:herbivoros(nombre, altura, peso, fechaCreacion, sexo, longitud, tipo, incisivos){
  this->longitudCuernos = longitudCuernos;
  this->longitudCuernoNasal = longitudCuernoNasal;
}


int triceratops::getLongitudCuernos(){

    return longitudCuernos;
}

int triceratops::getLongitudCuernosNasal(){
  return longitudCuernoNasal;
}

void triceratops::setLongitudCuernosNasales(int longitudCuernoNasal){
    this->longitudCuernoNasal = longitudCuernoNasal;
}

void triceratops::setlongitudCuernos(int longitudCuernos){
    this->longitudCuernos = longitudCuernos;
}