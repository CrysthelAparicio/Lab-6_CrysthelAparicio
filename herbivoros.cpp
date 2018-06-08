#include "herviboros.h"
#include <iostream>
#include <string>


herviboros:: herviboros(){


}

herviboros:: herviboros(string t, int d){
    tipo = t;
    dientes = d;
}


int herviboros::getDientes(){
    return dientes;
}

string herviboros::getTipo(){
    return tipo;
}

void herviboros::setDientes(int d){
    dientes = d;
}

void herviboros::setTipo(string t){
    tipo = t;
}