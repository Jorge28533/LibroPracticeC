#include "includes.h"
#include "conio.h"
string parrafo[400];

#define KEY_UP 72 + 256
#define KEY_DOWN 80 + 256
#define KEY_RIGHT 77 + 256
#define KEY_LEFT 75 + 256

void CrearArchivo() {
	system("cls");
	ofstream archivo;
	string NombreArchivo;
	string texto;
	cin.get();


	cout << "Nombre del Archivo nuevo:" << endl;
	cout << "Ejemplo: TareasEscuela.txt" << endl;
	getline(cin, NombreArchivo);

	archivo.open(NombreArchivo.c_str(), ios::out);
	if (archivo.fail()) {
		cout << "No se pudo abrir el archivo";
		exit(1);
	}
	archivo.close();
}


void Escribirtexto() {
	ofstream archivo;
	string NombreArchivo;
	cin.get();
	system("cls");

	string texto;

	cout << "Escriba el nombre del archivo en donde quieres Modificar" << endl;
	cout << "Ejemplo: TareasEscuela.txt" << endl;
	getline(cin, NombreArchivo);
	
	archivo.open(NombreArchivo.c_str(), ios::out);
	if (archivo.fail()) {
		cout << "No se pudo abrir el archivo";
		exit(1);
	}
	archivo.close();
	
	cout << "Ya puedes escribir: " << endl;
	cout << "Escribe para Cerrar el archivo: sal " << endl;
	cout << "Arriba:subir,Abajo:bajar,derecha y izquierda:continuar" << endl;

	int l = 0;
	for (int i = 0; i < 201;)
	{
		for (int u = 0; u < l; u++)
		{
			cout << u << ". ";
			cout << parrafo[u] << endl;
		}
		int tecla;
		tecla = getch();
		if (tecla == 0 || tecla == 224) {
			tecla = 256 + getch();
		}
		switch (tecla)
		{
		case KEY_UP: ++i; ++l; continue;
		case KEY_DOWN: --i; continue;
		case KEY_RIGHT:break;
		case KEY_LEFT: system("cls");
			remove(NombreArchivo.c_str());
			archivo.open(NombreArchivo.c_str(), ios::out);
			if (archivo.fail()) {
				cout << "No se pudo abrir el archivo";
				exit(1);
			}
			for (int u = 0; u < l; u++) {
				archivo << parrafo[u] << endl;
			}
			archivo.close();
			continue;
		}
		cout << i << ". ";
		getline(cin, texto);
		if (texto == "sal") {
			break;
		}
		parrafo[i] = texto;
		if (l <= i) {
			l++;
		}
		i++;

		system("cls");
	}
	for (int u = 0; u < l; u++)
	{
		parrafo[u] = "";
	}
}


void Modificar() {
	system("cls");
	ifstream archivo;
	fstream archivo2;
	string texto;
	string NombreArchivo;
	cin.get();

	cout << "Escribe el nombre del archivo qeu quieres modificar" << endl;
	cout << "Ejemplo: mydata.txt" << endl;
	getline(cin, NombreArchivo);

	archivo.open(NombreArchivo.c_str(), ios::in);
	if (archivo.fail()) {
		cout << "No se pudo abrir el archivo";
		exit(1);
	}
	int i = 0;
	int l = 0;
	while (!archivo.eof()) // Mientras no sea el dinal de mi archivo
	{

		getline(archivo, texto);
		parrafo[i] = texto;
		i++;
		l++;
	}
	archivo.close();

	
	cout << "Ya puedes escribir: " << endl;
	cout << "Escribe para Cerrar el archivo: zbr " << endl;
	cout << "Arriba:subir,Abajo:bajar,derecha:continuar, izquierda:guardar" << endl;


	for (int i = l; i < 201;)
	{
		for (int u = 0; u < l; u++)
		{
			cout << u << ". ";
			cout << parrafo[u] << endl;
		}
		int tecla;
		tecla = getch();
		if (tecla == 0 || tecla == 224) {
			tecla = 256 + getch();
		}
		switch (tecla)
		{
		case KEY_UP: ++i; ++l; system("cls"); continue;
		case KEY_DOWN: --i;  system("cls"); continue;
		case KEY_RIGHT:break;
		case KEY_LEFT:
			system("cls");
			remove(NombreArchivo.c_str());
			archivo2.open(NombreArchivo.c_str(), ios::out);
			if (archivo2.fail()) {
				cout << "No se pudo abrir el archivo";
				exit(1);
			}
			for (int u = 0; u < l; u++) {
			archivo2 << parrafo[u] << endl;
		}
			archivo2.close(); 
			continue;
		}
		cout << i << ". ";
		getline(cin, texto);
		if (texto == "zbr") {
			break;
		}

		parrafo[i] = texto;
		if(l <= i){
			l++;
		}
		i++;

		system("cls");
	}
	for (int u = 0; u < l; u++)
	{
		parrafo[u] = "";
	}
}

void Menu() {
	int opcion;
	do {
		cout << ".:MENU:." << endl;
		cout << "1.Crear y modificar un archivo." << endl;
		cout << "2.Modificar un archivo existente" << endl;
		cout << "3.Salir" << endl;
		cout << "Opcion:  ";
		cin >> opcion;

		switch (opcion) {
		case 1:
			CrearArchivo();
			Escribirtexto();
			system("pause");
			break;
		case 2:
			Modificar();
			break;
		}

		system("cls");
	} while (opcion != 3);
}

int main() {
	Menu();
}