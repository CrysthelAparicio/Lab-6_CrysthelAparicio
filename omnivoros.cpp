#include "omnivoros.h"
#include <iostream>
#include <string>

omnivoros::omnivoros(){


}

omnivoros::omnivoros(int m, int c){
    n_molares = m;
    n_colmillos = c;
}


int omnivoros::getNumeroMolares(){

    return n_molares;
}

int omnivoros::getNumeroComillos(){

    return n_colmillos;
}

void omnivoros::setNumeroMolares(int m){
   n_molares = m;
}

void omnivoros::setNumeroComillos(int c){
    n_colmillos = c;
}