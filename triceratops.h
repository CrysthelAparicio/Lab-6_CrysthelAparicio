#ifndef TRICERATOPS_H
#define TRICERATOPS_H
#include "herbivoros.h"

class triceratops:public herbivoros{
    
    private:
        int longitud_cuernos;
        int longitud_cuerno_nasal;
    
    public:
       
        triceratops(int,int);
        //get
        int getLongitudCuernos();
        int getLongitud_Cuerno_Nasal();
        //set
        void setLongitudCuernos(int);
        void setLongitud_Cuerno_Nasal(int);
        
};

#endif