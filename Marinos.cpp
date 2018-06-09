#include "Marinos.h"
#include "Dinosaurio.h"
#include <iostream>

using namespace std;

Marinos::Marinos(string nombre, int altura, int peso, string fechaCreacion, string sexo, int longitud,int numAletas,string tipo):
Dinosaurio(nombre,altura,peso,fechaCreacion,sexo,longitud){
  this-> numAletas = numAletas;
  this-> Tipo = tipo;
}

int Marinos::getnumAletas(){
    return numAletas;
}

string Marinos::getTipo(){
    return Tipo;
}

void Marinos::setnumAletas(int o){
    numAletas = o;
}

void Marinos::setTipo(string t){
    Tipo = t;
}

