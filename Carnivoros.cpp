#include <iostream>
#include <string>
#include "Dinosaurio.h"
#include "Carnivoros.h"

using namespace std;

Carnivoros::Carnivoros(string pOrgano, 
string pCoc):Dinosaurio(string pNombre, int pAltura, double pPeso, string pFecha, 
string pSexo, double pLongitud){
    organo = pOrgano;
    coc = pCoc;
}

string Carnivoros::getOrgano(){
    return organo;
}

void Carnivoros::setOrgano(string pOrgano){
    organo = pOrgano;
}

//////////////////7

string Carnivoros::getCoc(){
    return coc;
}

void Carnivoros::setCoc(string pCoc){
    coc = pCoc;
}