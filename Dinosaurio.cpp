#include <iostream>
#include <string>
#include "Dinosaurio.h"

using namespace std;
Dinosaurio::Dinosaurio(string pNombre, int pAltura, double pPeso, string pFecha, string pSexo, double pLongitud){
     nombre = pNombre;
     altura = pAltura;
     peso = pPeso;
     fecha = pFecha;
     sexo = pSexo;
     longitud = pLongitud;
}

string Dinosaurio::getNombre(){
    return nombre;
}

void Dinosaurio::setNombre(string pNombre){
    nombre = pNombre;
}

//////////////
int Dinosaurio::getAltura(){
    return altura;
}

void Dinosaurio::setAltura(int pAltura){
    altura = pAltura;
}
//////////////

double Dinosaurio::getPeso(){
    return peso;
}

void Dinosaurio::setPeso(double pPeso){
    peso = pPeso;
}

/////////////////////

string Dinosaurio::getFecha(){
    return fecha;
}

void Dinosaurio::setFecha(string pFecha){
    fecha = pFecha;
}

///////////////////

string Dinosaurio::getSexo(){
    return sexo;
}

void Dinosaurio::setSexo(string pSexo){
    sexo = pSexo;
}

/////////////////////

double Dinosaurio::getLongitud(){
    return longitud;
}

void Dinosaurio::setLongitud(double pLongitud){
    longitud = pLongitud;
}