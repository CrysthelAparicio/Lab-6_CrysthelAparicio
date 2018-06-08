#ifndef HERVIBOROS_H
#define HERVIBOROS_H
#include "Dinosaurio.h"

class herbivoros:public Dinosaurio{
    
    private:
        string tipo;
        int dientes;
    
    public:
        herbivoros();
        herbivoros(string,int);
        //get
        string getTipo();
        int getDientes();
        //set
        void setTipo(string);
        void setDientes(int);
        


};

#endif