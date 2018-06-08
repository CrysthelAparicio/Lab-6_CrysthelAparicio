#include "triceratops.h"
#include <iostream>
#include <string>


triceratops:: triceratops(){


}

triceratops:: triceratops(int l, int ll){
    longitud_cuernos = l;
    longitud_cuerno_nasal = ll;
}


int triceratops::getLongitudCuernos(){

    return longitud_cuernos;
}

int triceratops::getLongitud_Cuerno_Nasal{

    return longitud_cuerno_nasal;
}

void herviboros::setLongitudCuernos(int l){
    longitud_cuernos = l;
}

void herviboros::setLongitud_Cuerno_Nasal(int ll){
    longitud_cuerno_nasal = ll;
}