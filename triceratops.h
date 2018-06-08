#ifndef TRICERATOPS_H
#define TRICERATOPS_H
#include "herbivoros.h"

class triceratops:public herbivoros{
    
  public:
    int longitudCuernos;
    int longitudCuernoNasal;

  public:
    triceratops();
    triceratops(string, int, int, string, string, int, string, int, int ,int);
    int getLongitudCuernos();
    int getLongitudCuernosNasal();
  
    void setlongitudCuernos(int);
    void setLongitudCuernosNasales(int);

        
};

#endif