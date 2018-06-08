#ifndef DINOSAURIO_H
#define DINOSAURIO_H
#include <string>
#include <iostream>
using std::string;

class Dinosaurio{
    private: 
    string nombre;
    int altura;
    double peso;
    string fecha;
    string sexo;
    double longitud;

    public:
    Dinosaurio(string,int,double,string,string,double);
    ~Dinosaurio();
    
    string getNombre();
    int getAltura();
    double getPeso();
    string getFecha();
    string getSexo();
    double getLongitud();

    void setNombre(string);
    void setAltura(int);
    void setPeso(double);
    void setFecha(string);
    void setSexo(string);
    void setLongitud(double);
};
#endif