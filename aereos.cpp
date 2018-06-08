#include "Dinosaurio.h"
#include <iostream>
#include <string>

aereos::aereos(){

}

aereos::aereos(string a, string s){
    vuela = a;
    plumaje = s;
}


string aereos::getVuela(){

    return vuela;
}

string aereos::getPlumaje(){

    return plumaje;
}

void aereos::setVuela(string a){
   vuela = a;
}

void oviraptor::setPlumaje(int c){
    plumaje = c;
}