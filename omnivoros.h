#ifndef OMNIVOROS_H
#define OMNIVOROS_H
#include "Dinosaurio.h"

class omnivoros:public Dinosaurio{
    private:
        int n_molares;
        int n_colmillos;
    
    public:
        omnivoros();
        omnivoros(int,int);
        //get
        int getNumeroMolares();
        int getNumeroComillos();
        //set
        void setNumeroMolares(int);
        void setNumeroColmillos(int);
        
};

#endif