#ifndef AEREOS_H
#define AEREOS_H
#include "Dinosaurio.h"
#include<string> 

class aereos:public Dinosaurio{
    private:
        string vuela;
        string plumaje;
    
    public:
        aereos();
        aereos(string,string);
        //get
        string getVuela();
        string getPlumas();
        //set
        void setVuela(string);
        void setPlumas(string);
        
};

#endif