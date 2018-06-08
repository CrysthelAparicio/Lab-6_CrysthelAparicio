#include <iostream>
#include <string>
#include "Carnivoros.h"
#include "Tyranosaurio.h"
#include "Dinosaurio.h"

using namespace std;

<<<<<<< HEAD
Tyranosaurio::Tyranosaurio(string nombre, int altura, int peso, string fechaCreacion, string sexo, int longitud,string organo,string tipo,int consumoDiario,int numColmillos):Carnivoros(nombre,altura,peso,fechaCreacion,sexo,longitud,organo,tipo){
    this-> consumo = consumoDiario;
    this-> colmillos = numColmillos;
=======
Tyranosaurio::Tyranosaurio(string pNombre, int pAltura, double pPeso, string pFecha, string pSexo, double pLongitud, string pOrgano, 
string pCoc, int pColmillos, 
int pConsumo):Carnivoros(pNombre,pAltura, pPeso, pFecha, pSexo,pLongitud, pOrgano, 
 pCoc, pColmillos, 
pConsumo){
    colmillos = pColmillos;
    consumo = pConsumo;
>>>>>>> 3d652dc47938d532e56a8eadfbdbd5e7cf9fe5ee
}

int Tyranosaurio::getColmillos(){
    return colmillos;
}

void Tyranosaurio::setColmillos(int pColmillos){
    colmillos = pColmillos;
}

//////////////////7

int Tyranosaurio::getConsumo(){
    return consumo;
}

void Tyranosaurio::setConsumo(int pConsumo){
    consumo = pConsumo;
}