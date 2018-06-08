#include <iostream>
#include <string>
using namespace std;
#include "Dinosaurio.h"

//void eliminarDinosaurio(Dinosuario*);

int main()
{
	int opcion;
	Dinosaurio* dino = NULL;
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
				
				break;

			case 2:
				
				break;

			case 3:
				
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