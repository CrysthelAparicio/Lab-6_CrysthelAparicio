#include <iostream>
#include <string>
using namespace std;
#include "Dinosaurio.h"
#include "aereos.h"
#include "Carnivoros.h"
#include "Cuidador.h"
#include "herbivoros.h"
#include "Marinos.h"
#include "omnivoros.h"
#include "oviraptor.h"
#include "Spinosauro.h"
#include "triceratops.h"
#include "Tyranosaurio.h"
#include <vector>
#include <fstream>
using std::cout;
vector <Dinosaurio*> Vdino;
Dinosaurio* dino;
Cuidador* cuida;
vector<Cuidador*> vCuidadores;
vector<Dinosaurio> vr;
void eliminarDinosaurio();
void agregarEspecies();
int main()
{
	int opcion;
	//Dinosaurio* dino = NULL;
	do
	{
		cout << "\nMENU\n"
			<< "1) Agregar Especies\n"
			<< "2) Modificar Especies\n"
			<< "3) Eliminar Especies\n"
			<< "4) Visualizar Reporte Especie\n"
			<< "5) Visualizar Reporte Dinosaurio\n"
			<< "6) Agregar Cuidarores\n"
			<< "7) Eliminar Cuidador\n"
			<< "0) Salir\n"
			<< "Seleccione una opcion: ";
		cin >> opcion;

		switch (opcion)
		{
			case 1:
    agregarEspecies();
				break;

			case 2:
				break;

			case 3:
            eliminarDinosaurio();
				break;

			case 4:
				
				break;

			case 5:
				
				break;

			case 6:
				
				break;

			case 7:
				
				break;

			case 0:
				
				break;

			default:
				cout << "Opcion no valida!" << endl;
				break;
		}
	}
	while (opcion != 0);
	return 0;
}



int validarCin(string mensaje)
{
	int resultado = 0;
	bool salir = false;
	do
	{
		cout << mensaje;
		if (!(cin >> resultado))
		{
			cout << "Por favor no ingrese caracteres!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
		}
		else
		{
			salir = true;
		}
	}
	while(!salir);
	return resultado;
}

void agregarEspecies(){
        char carni;
        string organo; 
        string coc; 
		string nombre;
		double altura,peso,longitud;
		string fecha,sexo;
        
        int colmillos=0;
        int consumo=0;
        double alturaEspina=0;
        double longitudBrazo=0;
        char resp;
        int longitud_cuernos=0;
                int longitud_cuerno_nasal=0;
                int ic;
                 int altura_cresta;
                 int num_molares;
                 int num_colmillos;
        cout<<"1.Agregar Carnivoros\n2.Agregar Herbivoros\n3.Agregar Omnivoros\n 4. Agregar Aereos\n 5. Agregar Marinos";
         cin>>resp;
        //Variables
    switch(resp) {
        case '1':  
                    cout<<"Ingrese el nombre del Dinosaurio"<<endl;
                    cin>>nombre;
                    cout<<"Ingrese la Altura"<<endl;
                    cin>>altura;
                    cout<<"Ingrese el peso"<<endl;
                    cin>>peso;
                    cout<<"Ingrese la fecha de Creacion"<<endl;
                    cin>>fecha;
                    cout<<"Ingrese el Sexo"<<endl;
                    cin>>sexo;
                    cout<<"Ingrese la longitud"<<endl;
                    cin>>longitud;
                    cout<<"Ingrese tipo de organo(dientes-garras): "<<endl;
                    cin>>organo;
                    cout<<"Ingrese si es cazador o carroñero: "<<endl;
                    cin>>coc;
                    cout<<"Tipo de Dinosaurio Carnivoro->\n1.Tyranosaurio\n2.Spinosaurio";
                    cin>>carni;
                    break;
                     switch(carni){
                                case '1':
                                cout<<"Numero de Colminllos: "<<endl;
                                if(colmillos<=60){
                                cout<<"Ingrese un valor mayor a 60"<<endl;
                                }else{
                                cin>>colmillos;
                                }
                                cout<<"Consumo diario de carne: "<<endl;
                                if(consumo<=6877){
                                cout<<"Ingrese un valor mayor a 6877"<<endl;
                                }else{
                                cin>>consumo;
                                }
                                dino = new Tyranosaurio(nombre,altura,peso,fecha,sexo,longitud,organo,coc,colmillos,consumo);
                                Vdino.push_back(dino);
                                break;

                                case '2':
                                ////double altura,peso,longitud;
                                //string fecha,sexo;
                                cout<<"Ingrese el nombre del Dinosaurio"<<endl;
                                cin>>nombre;
                                cout<<"Ingrese la Altura"<<endl;
                                cin>>altura;
                                cout<<"Ingrese el peso"<<endl;
                                cin>>peso;
                                cout<<"Ingrese la fecha de Creacion"<<endl;
                                cin>>fecha;
                                cout<<"Ingrese el Sexo"<<endl;
                                cin>>sexo;
                                cout<<"Ingrese la longitud"<<endl;
                                cin>>longitud;
                                cout<<"Altura de Espina Neural: "<<endl;
                                if(alturaEspina<=2.5){
                                cout<<"Ingrese un valor mayor a 2.5"<<endl;
                                }else{
                                cin>>alturaEspina;
                                }
                                cout<<"Longitud de Brazos: "<<endl;
                                if(longitudBrazo>=1.5){
                                cout<<"Ingrese un valor menor a 1.5"<<endl;
                                }else{
                                cin>>longitudBrazo;
                                }
                                dino  = new Spinosauro(nombre,altura,peso,fecha,sexo,longitud,organo,coc,alturaEspina,longitudBrazo);
                                Vdino.push_back(dino);
                                break;
                    }
        case '2': 
             cout<<"Ingrese el nombre del Dinosaurio"<<endl;
                        cin>>nombre;
                        cout<<"Ingrese la Altura"<<endl;
                        cin>>altura;
                        cout<<"Ingrese el peso"<<endl;
                        cin>>peso;
                        cout<<"Ingrese la fecha de Creacion"<<endl;
                        cin>>fecha;
                        cout<<"Ingrese el Sexo"<<endl;
                        cin>>sexo;
                        cout<<"Ingrese la longitud"<<endl;
                        cin>>longitud;
                        cout<<"Ingrese si son frugivoros o folivoros: "<<endl;
                        cin>>organo;
                        cout<<"ingrese el numero de insicivos "<<endl;
                        cin>>ic;
                        cout<<"Ingrese la longitud de cuernos "<<endl;

                        cin>>longitud_cuernos;
                        
                        cout<<"Ingrese longitud cuerno nasal "<<endl;
                        
                        cin>>longitud_cuerno_nasal;
                    
						dino  = new triceratops(nombre,altura,peso,fecha,sexo,longitud,organo,ic,longitud_cuernos,longitud_cuerno_nasal);
						Vdino.push_back(dino);
        break;

		case '3':
            char op;
            //int cont=0;
            bool plumaje;
			cout<<"ingrese nombre:"<<endl;
            cin>>nombre;
            cout<<"ingrese altura:"<<endl;
            cin>>altura;
            while(altura<2){
                cout<<"incorrecto,vuelva a ingresar altura"<<endl;
                cin>>altura;
            }
            cout<<"ingrese peso:"<<endl;
            cin>>peso;
            while(peso<200){
                cout<<"incorrecto,vuelva a ingresar peso"<<endl;
                cin>>peso;
            }
            cout<<"ingrese fecha de creacion(dd/mm/aaaa):"<<endl;
            cin>>fecha;
            cout<<"ingrese sexo:"<<endl;
            cin>>sexo;
            cout<<"ingrese longitud"<<endl;
            cin>>longitud;
            while(longitud<2){
                cout<<"incorrecto,vuelva a ingresar longitud"<<endl;
                cin>>longitud;
            }  
        cout<<"numeros de molares: "<<endl;
        cin>>num_molares;
        while(num_molares<0|| num_molares>30){
            cout<<"incorrecto,opcion fuera de rango"<<endl;
                    cin>>num_molares;
        }
        cout<<"numero de colmillos "<<endl;
        cin>>num_colmillos;
        while(num_colmillos<0|| num_colmillos>30){
            cout<<"incorrecto, opcion fuera de rango"<<endl;
                    cin>>num_colmillos;
        }

        cout<<"altura de cresta"<<endl;
        cin>>altura_cresta;
        while(altura_cresta>1){
             cout<<"incorrecto,opcion fuera de rango"<<endl;
             cin>>altura_cresta;
        }
        cout<<"tiene plumaje?"<<endl;
        cout<<"1. SI\n2. NO"<<endl;
        cin>>op;

        if(op=='1'){
            plumaje=true;
        }else{
            plumaje=false;
        }

    dino=new oviraptor(nombre,altura,peso,fecha,sexo,longitud,num_molares,num_colmillos,altura_cresta,plumaje);
    Vdino.push_back(dino);
    break;

    case '4':
    //datos clase
    bool vuela,plumas;
    char op1,op2;
    //datos generales
            cout<<"ingrese nombre:"<<endl;
            cin>>nombre;
            cout<<"ingrese altura:"<<endl;
            cin>>altura;
            while(altura<2){
                cout<<"incorrecto,vuelva a ingresar altura"<<endl;
                cin>>altura;
            }
            cout<<"ingrese peso:"<<endl;
            cin>>peso;
            while(peso<200){
                cout<<"incorrecto,vuelva a ingresar peso"<<endl;
                cin>>peso;
            }
            cout<<"ingrese fecha de creacion "<<endl;
            cin>>fecha;
            cout<<"ingrese sexo:"<<endl;
            cin>>sexo;
            cout<<"ingrese longitud"<<endl;
            cin>>longitud;
            while(longitud<2){
                cout<<"incorrecto,vuelva a ingresar longitud"<<endl;
                cin>>longitud;
            }
            cout<<"Escoja cuidador:"<<endl;

        cout<<"vuela?\n1. SI\n2.NO"<<endl;
        cin>>op1;
        if(op1=='1'){
            vuela=true;
        }else{
            vuela=false;
        }
        cout<<"tiene plumas?\n1. SI\n2.NO"<<endl;
        cin>>op2;
        if(op2=='1'){
            plumas=true;
        }else{
            plumas=false;
        }
        dino=new aereos(nombre,altura,peso,fecha,sexo,longitud,vuela,plumas);
        Vdino.push_back(dino);
        
        break;
        case '5':

        string nombre,fecha,sexo;
        int altura,peso,longitud;
        //cuidadores* c=new cuidadores();
        int cont=0;
        //Datos clase
        int num_aletas;
        string tipo;

            cout<<"ingrese nombre:"<<endl;
            cin>>nombre;
            cout<<"ingrese altura:"<<endl;
            cin>>altura;
            while(altura<2){
                cout<<"incorrecto,vuelva a ingresar altura"<<endl;
                cin>>altura;
            }
            cout<<"ingrese peso:"<<endl;
            cin>>peso;
            while(peso<200){
                cout<<"incorrecto,vuelva a ingresar peso"<<endl;
                cin>>peso;
            }
            cout<<"ingrese fecha de creacion(dd/mm/aaaa):"<<endl;
            cin>>fecha;
            cout<<"ingrese sexo:"<<endl;
            cin>>sexo;
            cout<<"ingrese longitud"<<endl;
            cin>>longitud;
            while(longitud<2){
                cout<<"incorrecto,vuelva a ingresar longitud"<<endl;
                cin>>longitud;
            }
            cout<<"Escoja cuidador:"<<endl;


        //datos clase
        cout<<"numero de aletas"<<endl;
        cin>>num_aletas;
        while(num_aletas>6){
            cout<<"incorrecto,opcion fuera de rango"<<endl;
                    cin>>num_aletas;
        }
        cout<<"terrestre/marino o marino?:"<<endl;
        cin>>tipo;
        //string nombre, int altura, int peso, string fechaCreacion,
        // string sexo, int longitud,int numAletas,string tipo
        dino=new Marinos(nombre,altura,peso,fecha,sexo,longitud,num_aletas,tipo);
         Vdino.push_back(dino);
        break;
        
    }
}


void eliminarDinosaurio(){
    int opcion;
    int cont=0;
    cout<<"¿Que dinosaurio desea eliminar?, porfavor ingreselo...."<<endl;
    for(int i = 0; i < Vdino.size(); i++)
    {
        cout<<cont<<", "<<Vdino[i]->getNombre()<<endl;
        cont++;
    }
    cin>>opcion;
    if(opcion<0||opcion>Vdino.size()){
        cout<<"Incorrecto, opcion fuera de rango"<<endl;
        cin>>opcion;
    }else{
        //Vdino.erase(begin(Vdino)+opcion);
    }
}
/*
void escribirArchivo(){
    ofstream archivo;
    archivo.open("cuidadores.txt",ios::trunc);

    for(int i = 0; i < vCuidadores.size(); i++){
        archivo<<vCuidadores[i]->getNombre()<<";";
        archivo<<vCuidadores[i]->getID()<<";";
        //archivo<<v_cuidadores[i]->getedad()<<";";
        archivo<<vCuidadores[i]->getSexo()<<endl;
    }
    archivo.close();

}

void cargarArchivo(){
    ifstream archivo;
    string id;
    string nombre;
    string sexo;
    string todo;
    archivo.open("cuidadores.txt",ios::in);
    while(!archivo.eof()){
        getline(archivo,todo);
        if(todo != ""){
            int posI =0;
            int posF=0;
            vector<string> r;
            string split;
            while(posF >=0){
                posF = todo.find(";",posI);
                split = todo.substr(posI,posF-posI);
                posI = posF+1;
                r.push_back(split);
            }
            nombre = r.at(0);
            id = r.at(1);
            sexo = r.at(2);
            Cuidador* cui = new Cuidador(nombre,3,sexo,0);
            vCuidadores.push_back(cui);
            }
    }
    archivo.close();
}

void cargarArchivos(){
    vector <Dinosaurio*> Vdino;
    Dinosaurio* dino;
    ifstream infile("texto.txt");
         char temporalChar;
         string strTemporal="";
         int cont=0;
         Dinosaurio* temPtrDinosaurio;
         
    void setNombre(string);
    void setAltura(int);
    void setPeso(double);
    void setFecha(string);
    void setSexo(string);
    void setLongitud(double);

         do {
            do {
                infile>>temporalChar;
                if (temporalChar!=',' && temporalChar!='/') {
                    strTemporal+=temporalChar;
                }
            } while(temporalChar!=',' && temporalChar!='/');
            //cout<<strTemporal<<endl;
        
            switch(cont){
             case 0:
                temPtrDinosaurio;
                temPtrDinosaurio->setNombre(strTemporal);
                cont++;
             break;
             case 1:
                temPtrDinosaurio->setAltura(atoi(strTemporal.c_str()));
               cont++;
             break;
             case 2:
                temPtrDinosaurio->setFecha(strTemporal.c_str());
                cont++;
             break;
             case 3:
                temPtrDinosaurio->setPeso(atoi(strTemporal.c_str()));
                cont++;
             break;
             case 4:
                temPtrDinosaurio->setLongitud(atoi(strTemporal.c_str()));
                //dino->setLongitud(temPtrDinosaurio);
                cont=0;
             break;
            }
            strTemporal="";
         
         } while(temporalChar!='/');
         infile.close();
        //Fin cargar
}

void cuidadores(){
    char tecla;
    Cuidador* cuidador;
    cout<<"1. Agregar cuidadores"<<endl;
    cout<<"2. Eliminar cuidadores"<<endl;
    cin>>tecla;
    string nombre,ID,sexo;
    int edad;
    int cont=0;
    switch(tecla){
        case '1'://agregar
                cout<<"Ingrese el nombre:"<<endl;
                cin>>nombre;
                cout<<"Ingrese su ID:"<<endl;
                cin>>ID;
                cout<<"Ingrese el sexo(Fem/Mas):"<<endl;
                cin>>sexo;
                cout<<"ingrese edad:"<<endl;
                cin>>edad;
                while(edad<21){
                    cout<<"Mal,La edad tiene que ser mayor de 21 en adelante"<<endl;
                    cin>>edad;
                }
                Cuidador* c=new Cuidador(nombre,3,sexo,edad);
                vCuidadores.push_back(cuidador);
               // escribirArchivo();
                break;
        case '2'://eliminar

                int opcion;
                cout<<"Eliga a quien eliminara"<<endl;
                for(int i=0;i<vCuidadores.size();i++){
                    cout<<cont<<". "<<vCuidadores[i]->getNombre()<<endl;
                    cont++;
                }
                cin>>opcion;
                if(opcion<0 || opcion>=vCuidadores.size()){
                    cout<<"incorrecto,opcion fuera de rango"<<endl;
                    cin>>opcion;
                }else{
                    vCuidadores.erase(begin(vCuidadores)+opcion);
                }
                break;

        case '3':
               
                break;
        default:
            cout<<"opcion incorrecta"<<endl;
            break;
    }

}
*/