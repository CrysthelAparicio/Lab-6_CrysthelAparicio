#ifndef OVIRAPTOR_H
#define OVIRAPTOR_H
#include "omnivoros.h"
#include<string> 

using std::string;
class oviraptor:public omnivoros{
    
    private:
        int altura;
        string plumaje;
    
    public:
        oviraptor();
        oviraptor(int,string);
        //get
        int getAltura();
        string getPlumaje();
        //set
        void setAltura(int);
        void setPlumaje(string);
        
};

#endif