#include "Dinosaurio.h"
#include "aereos.h"
#include <iostream>
#include <string>

using std::string;

 aereos::aereos(string a, string s):Dinosaurio(pNombre, pAltura, pPeso,pFecha, pSexo, pLongitud){
    vuela = a;
    plumaje = s;
    this->pNombre = pNombre;
    this->pAltura = pAltura;
    this->pPeso = pPeso;
    this->pFecha = pFecha;
    this->pSexo = pSexo;
    this->pLongitud = pLongitud;
}


string aereos::getVuela(){
    return vuela;
}

string aereos::getPlumas(){

    return plumaje;
}

void aereos::setVuela(string a){
   vuela = a;
}

void aereos::setPlumas(string c){
    plumaje = c;
}