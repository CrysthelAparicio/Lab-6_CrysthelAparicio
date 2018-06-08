#include "Dinosaurio.h"
#include "aereos.h"

aereos::aereos(){

}
aereos::aereos(string nombre, int altura, int peso, string fechaCreacion, string sexo, int longitud
, bool vuela, bool plumas):Dinosaurio(nombre, altura, peso, fechaCreacion, sexo, longitud){
  this->vuela = vuela;
  this->plumas = plumas;
}

bool aereos::getVuela(){
  return vuela;
}

bool aereos::getPlumas(){
  return plumas;
}

void aereos::getVuela(bool vuela){
  this->vuela = vuela;
}

void aereos::getPlumas(bool plumas){
  this->plumas = plumas;
}

void Aereos::toString(){
cout <<"Nombre: " << nombre <<"Altura: "<<altura <<"Peso: "<< peso <<"Fecha: "<< fechaCreacion <<"Sexo: "<<sexo <<
  "Longitud: "<< longitud << "Vuela?:  " <<vuela << "Tiene plumas?: "<<plumas;
}