#include "oviraptor.h"
#include "omnivoros.h"
#include "Dinosaurio.h"
#include <iostream>
using namespace std;

oviraptor::oviraptor(){

}

oviraptor::oviraptor(string nombre, int altura, int peso, string fechaCreacion, string sexo, int longitud
,int numeroMolares, int numeroColmillos, int alturaCresta, bool plumaje): omnivoros(nombre, altura, peso, fechaCreacion, sexo, longitud, numeroMolares, numeroColmillos){
  this->alturaCresta = alturaCresta;
  this->plumaje = plumaje;
}

int oviraptor::getalturaCresta(){
  return alturaCresta;
}

bool oviraptor::getPlumaje(){
  return plumaje;
}
/*
void oviraptor::toString(){
  cout <<"Nombre: " << nombre <<"Altura: "<<altura <<"Peso: "<< peso <<"Fecha: "<< fechaCreacion <<"Sexo: "<<sexo <<
  "Longitud: "<< longitud<< "Altura de la cresta: "<<alturaCresta << "Tiene plumaje?: "<< plumaje;
}
*/

void oviraptor::setAlturaCresta(int alturaCresta){
  this->alturaCresta = alturaCresta;
}

void oviraptor::setPlumaje(bool plumaje){
  this->plumaje = plumaje;
}