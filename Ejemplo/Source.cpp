#include <iostream>
#include <string>
#include <stdlib.h>
#include<Windows.h> // Español
#include<clocale> //Español

using namespace std;

struct Estudiantes
{
	string nombre, apellido, noCuenta;
	int edad;
}alumno[2];

void regAlumno (char respuesta);
void imprimirAlumnos(Estudiantes alumno);


int main() {

		setlocale(LC_ALL, "Spanish");
		SetConsoleCP(1252);

	char respuesta;

	cout << "Desea registrar?: ";
	cin >> respuesta;
	if (respuesta == 's')
	{
		regAlumno(respuesta);
	}

	else 
	{
		cout << "Gracias!";
		system("pause");
		return 0;
	}

	system("cls");
	for (int i = 0; i < 2; i++)
	{
		imprimirAlumnos(alumno[i]);
	}
		
	system("pause");
	return 0;
}

void regAlumno(char respuesta) {
	int indice;

	for (int i = 0; i < 2; i++)
	{
		indice = i + 1;
		cout << "---------------------------" << endl;
		cout << "Estudiante No. " << indice << endl << endl;


		cout << "Ingrese el nommbre: ";
		cin.ignore();
		getline(cin, alumno[i].nombre);
		cout << "Ingrese el Apellido: ";
	
		getline(cin, alumno[i].apellido);
		cout << "Ingrese el numero de cuenta: ";
		getline(cin, alumno[i].noCuenta);
		cout << "Ingrese la edad: ";
		cin >> alumno[i].edad;

	}
}


void imprimirAlumnos(Estudiantes alumno) {
	cout << alumno.nombre << " " << alumno.apellido << endl;
	cout << "Numero de cuenta :" << alumno.noCuenta << endl;
	cout << "Edad :" << alumno.edad << " años" << endl << endl;
	cout << "---------------------------" << endl << endl;

}