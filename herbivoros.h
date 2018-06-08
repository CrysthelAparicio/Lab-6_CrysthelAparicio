#ifndef HERVIBOROS_H
#define HERVIBOROS_H
#include "Dinosaurio.h"

class herviboros:public Dinosaurio(){
    
    private:
        string tipo;
        int dientes;
    
    public:
        herviboros();
        herviboros(string,int);
        //get
        string getTipo();
        int getDientes();
        //set
        void setTipo(string);
        void setDientes(int);
        


}