#ifndef CUIDADOR_H
#define CUIDADOR_H
#include <string>
#include <iostream>
using std::string;

class Cuidador{
    private: 
    string nombre;
    int ID;
    string sexo;
    int edad;

    public:
    Cuidador(string,int,string,int);
    
    string getNombre();
    int getID();
    string getSexo();
    int getEdad();

    void setNombre(string);
    void setID(int);
    void setSexo(string);
    void setEdad(int);
};
#endif