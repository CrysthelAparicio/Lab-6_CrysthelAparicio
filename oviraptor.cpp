#include "oviraptor.h"
#include <iostream>
#include <string>

oviraptor::oviraptor(){


}

oviraptor::oviraptor(int a, string s){
    altura = a;
    plumaje = s;
}


int oviraptor::getAltura(){

    return n_molares;
}

string oviraptor::getPlumaje(){

    return plumaje;
}

void oviraptor::setAltura(int a){
   altura = a;
}

void oviraptor::setPlumaje(int c){
    plumaje = c;
}