#include "oviraptor.h"
#include <iostream>
#include <string>
#include "omnivoros.h"

using std::string;

oviraptor::oviraptor(int a, string s):omnivoros(pmolares,ccolmillos) {
    altura = a;
    plumaje = s;
    this->pmolares = molares;
    this->ccolmillos = colmillos;
}


int oviraptor::getAltura(){

    return altura;
}

string oviraptor::getPlumaje(){

    return plumaje;
}

void oviraptor::setAltura(int a){
   altura = a;
}

void oviraptor::setPlumaje(string c){
    plumaje = c;
}