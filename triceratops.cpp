#include "triceratops.h"
#include "herbivoros.h"
#include <iostream>
#include <string>




triceratops:: triceratops(int l, int ll):herbivoros(pTipo,pDientes){
    longitud_cuernos = l;
    longitud_cuerno_nasal = ll;
    this->pTipo = pTipo;
    this->pDientes = pDientes;
}


int triceratops::getLongitudCuernos(){

    return longitud_cuernos;
}

int triceratops::getLongitud_Cuerno_Nasal(){

    return longitud_cuerno_nasal;
}

void triceratops::setLongitudCuernos(int l){
    longitud_cuernos = l;
}

void triceratops::setLongitud_Cuerno_Nasal(int ll){
    longitud_cuerno_nasal = ll;
}