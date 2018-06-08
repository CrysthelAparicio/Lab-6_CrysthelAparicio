#ifndef AEREOS_H
#define AEREOS_H
#include "Dinosario.h"
#include<string> 

class aereos:public Dinosario(){
    private:
        string vuela;
        string plumaje;
    
    public:
        aereos();
        aereos(string,string);
        //get
        int getVuela();
        int getPlumaje();
        //set
        void setVuela(string);
        void setPlumaje(string);
        
}