#include <iostream>
#include <string>
#include "Carnivoros.h"
#include "Tyranosaurio.h"
#include "Dinosaurio.h"

using namespace std;

Tyranosaurio::Tyranosaurio(string nombre, int altura, int peso, string fechaCreacion, string sexo, int longitud,string organo,string tipo,int consumoDiario,int numColmillos):Carnivoros(nombre,altura,peso,fechaCreacion,sexo,longitud,organo,tipo){
    this-> consumo = consumoDiario;
    this-> colmillos = numColmillos;
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