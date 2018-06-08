#include <iostream>
#include <string>
#include "Cuidador.h"

using namespace std;
Cuidador::Cuidador(string pNombre, int pID, string pSexo, int pEdad){
     nombre = pNombre;
     ID = pID;
     sexo = pSexo;
     edad = pEdad;
}

string Cuidador::getNombre(){
    return nombre;
}

void Cuidador::setNombre(string pNombre){
    nombre = pNombre;
}

//////////////
int Cuidador::getID(){
    return ID;
}

void Cuidador::setID(int pID){
    ID = pID;
}
///////////////////

string Cuidador::getSexo(){
    return sexo;
}

void Cuidador::setSexo(string pSexo){
    sexo = pSexo;
}

/////////////////////

int Cuidador::getEdad(){
    return edad;
}

void Cuidador::setEdad(int pEdad){
    edad = pEdad;
}