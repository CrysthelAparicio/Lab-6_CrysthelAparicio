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

<<<<<<< HEAD



using std::cout;
using std::cin;
using std::vector;

//Dinosaurio* dino;
=======
vector <Dinosaurio*> Vdino;
Dinosaurio* dino = new Dinosaurio;
>>>>>>> 525167535c2f3364d04cab590c31f8cbff22a7d9
Cuidador* cuida;

vector<Dinosaurio> vr;

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
<<<<<<< HEAD
				int opcionAgregar;
						do{
							//nt opcionAgregar;
								cout << "\nAGREGAR\n"
								<< "1) Agregar Carnivoros\n"
								<< "2) Agregar Herbivoros\n"
								<< "3) Agregar Omnivoros\n"
								<< "4) Agregar Aereos\n"
								<< "5) Agregar Marinos\n"
								<< "0) Salir\n"
								<< "Seleccione una opcion: ";
							cin >> opcionAgregar;

							switch (opcionAgregar)
									{
									case 1:

									break;

									case 2:
									
									break;

									case 3:
									
									break;

									case 4:
									
									break;

									case 5:
									
									break;

									case 0:

									break;

									default:
									cout << "Opcion no valida!" << endl;
									break;
							}
						}
						while (opcionAgregar != 0);
						return 0;
					
				break;


			case 2: //modificar
				
				
				break;

			case 3://eliminar especies
				int pos = 0;
				for(int i = 0; i<vr.size();i++){
					cout<<"[ "<<i<<" ]"<< vr.cbegin()[i] <<endl;
				}
				cout<<endl;
				cout<<"Ingrese la posicion del dinosaurio a eliminar"<<endl;
				cin>>pos;

				delete vr[pos];
=======

				break;
>>>>>>> 525167535c2f3364d04cab590c31f8cbff22a7d9

				dino.erase(dino.begin()+pos);

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

void agregarEspecies()
{
    char resp;
    cout<<"1.Agregar Carnivoros\n2.Agregar Herbivoros\n3.Agregar Omnivoros\nAgregar Aereos\nAgregar Marinos";
    cin>>resp;
        //Variables
    switch(resp)
    {
        case '1':
        char carni;
        string organo; 
        string coc; 
        cout<<"Ingrese tipo de organo(dientes-garras): "<<endl;
        cin>>organo;
        cout<<"Ingrese si es cazador o carroñero: "<<endl;
        cin>>coc;
        cout<<"Tipo de Dinosaurio Carnivoro->\n1.Tyranosaurio\n2.Spinosaurio";
        cin>>carni;
        break;

        switch(carni){
            int colmillos=0;
            int consumo=0;
            double alturaEspina=0;
            double longitudBrazo=0;

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
                        break;

                        case '2':
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
                        break;
                    }
        case '2':
        char herbi;
        cout<<"Ingrese tipo de organo(dientes-garras): "<<endl;
        cin>>organo;
        cout<<"Ingrese si es cazador o carroñero: "<<endl;
        cin>>coc;
        cout<<"Ingrese tipo de dinosaurio herbivoro->\n1.Triceratops";
        cin>>herbi;
        break;

        switch(herbi){
                int longitud_cuernos=0;
                int longitud_cuerno_nasal=0;
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
                        break;
        }

        
    }
}