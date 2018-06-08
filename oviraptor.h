#ifndef OVIRAPTOR_H
#define OVIRAPTOR_H
#include "omnivoros.h"
#include<string> 

class oviraptor:public omnivoros(){
    private:
        int altura;
        string plumaje;
    
    public:
        oviraptor();
        oviraptor(int,string);
        //get
        int getAltura();
        int getPlumaje();
        //set
        void setAltura(int);
        void setPlumaje(string);
        
}