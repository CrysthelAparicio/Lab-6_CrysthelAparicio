#include <iostream>
#include <string>
#include "Dinosaurio.h"
#include "Carnivoros.h"
using namespace std;

<<<<<<< HEAD
Carnivoros::Carnivoros(string nombre, int altura, int peso, string fechaCreacion, string sexo, int longitud,string organo,string tipo):
Dinosaurio(nombre,altura,peso,fechaCreacion,sexo,longitud){
    this->organo = organo;
    this->coc = tipo;
=======
Carnivoros::Carnivoros(string pOrgano, 
string pCoc):Dinosaurio(string pNombre, int pAltura, double pPeso, string pFecha, 
string pSexo, double pLongitud){
    organo = pOrgano;
    coc = pCoc;
    this->pNombre=pNombre;
    this->pAltura=pAltura;
    this->pPeso=pPeso;
    this->pFecha=pFecha;
    this->pSexo=pSexo;
    this->pLongitud=pLongitud;
>>>>>>> 3d652dc47938d532e56a8eadfbdbd5e7cf9fe5ee
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