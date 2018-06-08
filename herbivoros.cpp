#include "herbivoros.h"
#include "Dinosaurio.h"
#include <iostream>
#include <string>


    herbivoros:: herbivoros(string t, int d):Dinosaurio(pNombre, pAltura, pPeso,pFecha, pSexo, pLongitud){
    tipo = t;
    dientes = d;
    this->pNombre = pNombre;
    this->pAltura = pAltura;
    this->pPeso = pPeso;
    this->pFecha = pFecha;
    this->pSexo = pSexo;
    this->pLongitud = pLongitud;
}


int herbivoros::getDientes(){
    return dientes;
}

string herbivoros::getTipo(){
    return tipo;
}

void herbivoros::setDientes(int d){
    dientes = d;
}

void herbivoros::setTipo(string t){
    tipo = t;
}