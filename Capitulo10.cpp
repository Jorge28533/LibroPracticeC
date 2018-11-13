#include "Includes.h"
void Drill() {
	//Drill
	
	int puntos[7][2];

	for(int i = 0; i < 7;)
	{
		int x;
		int y;
		int columna = 0;
		cout << "Ingrese x en posicion " << i <<  ":" << endl;
		cin >> x;
		cout << "Ingrese y en posicion" << i << ":" << endl;
		cin >> y;
		puntos[i][columna] = x;
		columna = 1;
		puntos[i][columna] = y;
		i++;
	}
	cout << endl;

	cout << "puntos son:" << endl;

	for (int i = 0; i < 7; i++)
	{
		cout << puntos[i][0] << " " << puntos[i][1] << endl;
	}
	ofstream archivo;
	ifstream archivo2;

	archivo.open("mydata.txt", ios::out);
	if (archivo.fail()) {
		cout << "No se pudo abrir el archivo";
		exit(1);
	}
	for (int i = 0; i < 7; i++)
	{
		archivo << puntos[i][0] << " ";
		archivo << puntos[i][1] << endl;
		}
	archivo.close();

	archivo2.open("mydata.txt", ios::in);
	if (archivo2.fail()) {
		cout << "No se pudo abrir el archivo";
		exit(1);
	}
	string line;

	int puntos_prosessando[7][2];
	int fila2 = 0;
	while (getline(archivo2,line))
	{
		int columna2 = 0;
		int n, m;
		archivo2 >> n >> m;
		puntos_prosessando[fila2][columna2] = n;
		columna2 = 1;
		puntos_prosessando[fila2][columna2] = m;
		fila2++;
	}
	archivo2.close();
	cout << "puntos_prosessando son:" << endl;
	for (int i = 0; i < 7; i++)
	{
		cout << puntos_prosessando[i][0] << " " << puntos_prosessando[i][1] << endl;
	}
	for (int i = 0; i < 7; i++)
	{
		if (puntos_prosessando[i][0] != puntos[i][0] && puntos_prosessando[i][1] != puntos[i][1]){
			cout << "Algo Esta mal" << endl;
			break;
		}
		if (puntos_prosessando[i][0] == puntos[i][0] && puntos_prosessando[i][1] == puntos[i][1])
		{
			cout << "Esta Bien" << endl;
			break;
		}
	}

	
}

void ConcatenarTexto(){
	//Ejercicio 8 me quedo bien chido xD XD xD xD
	ofstream archivo;
	ifstream archivo2;
	ifstream archivo3;

	string NombreArchivo;
	string NombreArchivo2;
	string NombreArchivo3;
	string texto;

	cin.get();

	cout << "escriba el nombre del archivo en donde quieres Concatenar:" << endl;
	cout << "Ejemplo: concatenar.txt" << endl;
	getline(cin, NombreArchivo);

	cout << "escriba el nombre del archivo que quieres concatenar:" << endl;
	cout << "Ejemplo: mydata.txt" << endl;
	getline(cin, NombreArchivo2);

	cout << "escriba el segundo nombre del archivo que quieres concatenar:" << endl;
	cout << "Ejemplo: anagram.txt" << endl;
	getline(cin, NombreArchivo3);



	archivo.open(NombreArchivo.c_str(), ios::out);
	if (archivo.fail()) {
		cout << "No se pudo abrir el archivo";
		exit(1);
	}
	archivo2.open(NombreArchivo2.c_str(), ios::in);
	if (archivo2.fail()) {
		cout << "No se pudo abrir el archivo";
		exit(1);
	}
	while (!archivo2.eof()) // Mientras no sea el dinal de mi archivo
	{
		getline(archivo2, texto);
		archivo << texto << endl;
	}
	archivo2.close();

	archivo3.open(NombreArchivo3.c_str(), ios::in);
	if (archivo3.fail()) {
		cout << "No se pudo abrir el archivo";
		exit(1);
	}
	while (!archivo3.eof()) // Mientras no sea el dinal de mi archivo
	{
		getline(archivo3, texto);
		archivo << texto << endl;
	}
	archivo3.close();
	archivo.close();

	
}

void Ejercicio1() {
	
	//Ejercicio 1
	ifstream archivo;
	string NombreArchivo;

	cin.get();

	cout << "escriba el nombre del archivo que quieres abrir:" << endl;
	cout << "Ejemplo: suma.txt" << endl;
	getline(cin, NombreArchivo);

	archivo.open(NombreArchivo.c_str(), ios::in);
	if (archivo.fail()) {
		cout << "No se pudo abrir el archivo";
		exit(1);
	}
	string line;
	int suma = 0;
	int m;

	while (getline(archivo, line))
	{
		archivo >> m;
		suma += m;
	}

	keep_window_open();
}


void store_temps(){
	ofstream archivo;

	archivo.open("raw_temps.txt", ios::out);
	if (archivo.fail()) {
		cout << "No se pudo abrir el archivo";
		exit(1);
	}

	archivo << "Horas Grados" << endl;
	archivo << "0 54.35" << endl;
	archivo << "1 60.7" << endl;
	archivo << "2 60.6" << endl;
	archivo << "3 60.3" << endl;
	archivo << "4 59.22" << endl;

	archivo << "5 41.85" << endl;
	archivo << "6 64.7" << endl;
	archivo << "7 47.6" << endl;
	archivo << "8 14.21" << endl;
	archivo << "9 64.2" << endl;

	archivo << "10 41.85" << endl;
	archivo << "11 36.21" << endl;
	archivo << "12 29.5" << endl;
	archivo << "13 35.01" << endl;
	archivo << "14 36.26" << endl;

	archivo << "15 41.85" << endl;
	archivo << "16 64.7" << endl;
	archivo << "17 47.6" << endl;
	archivo << "18 14.21" << endl;
	archivo << "19 64.2" << endl;

	archivo << "20 56.23" << endl;
	archivo << "21 54.21" << endl;
	archivo << "22 24.26" << endl;
	archivo << "23 35.21" << endl;
	archivo << "24 38.54" << endl;

	archivo << "25 32.21" << endl;
	archivo << "26 36.5" << endl;
	archivo << "27 12.2" << endl;
	archivo << "28 14.2" << endl;
	archivo << "29 15.5" << endl;

	archivo << "30 19.32" << endl;
	archivo << "31 22.2" << endl;
	archivo << "32 23.21" << endl;
	archivo << "33 21.3" << endl;
	archivo << "34 25.63" << endl;

	archivo << "35 31.2" << endl;
	archivo << "36 36.5" << endl;
	archivo << "37 31.2" << endl;
	archivo << "38 31" << endl;
	archivo << "39 14" << endl;

	archivo << "40 35.2" << endl;
	archivo << "41 36.4" << endl;
	archivo << "42 23.5" << endl;
	archivo << "43 23.5" << endl;
	archivo << "44 14.2" << endl;

	archivo << "45 21.3" << endl;
	archivo << "46 65.4" << endl;
	archivo << "47 56.6" << endl;
	archivo << "48 52.35" << endl;
	archivo << "49 45.63" << endl;


	archivo.close();

	
}

void temp_stats() {

	cin.get();

	ifstream archivo;
	archivo.open("raw_temps.txt", ios::in);
	if (archivo.fail()) {
		cout << "No se pudo abrir el archivo";
		exit(1);
	}
	vector<double> tems;
	string line;
	double mas = 0.0;

	while (getline(archivo, line))
	{
		int n;
		double m;
		archivo >> n >> m;
		tems.push_back(m);
	}
	archivo.close();

	for (int i = 0; i < 51; i++)
	{
		mas += tems[i];
	}

	int h, j, aux;

	for (h = 0; h < 50; h++)
	{
		for (j = 0; j < 50; j++)
		{
			if (tems[j] > tems[j + 1])
			{
				aux = tems[j];
				tems[j] = tems[j + 1];
				tems[j + 1] = aux;

			}
		}
	}

	cout << "la media es: " << mas / 50 << endl;
	cout << "la mediana es:" << tems[25] << endl;

	
}

void FarCelsiuos() {
	ofstream archivo;

	archivo.open("raw_temps2.txt", ios::out);
	if (archivo.fail()) {
		cout << "No se pudo abrir el archivo";
		exit(1);
	}

	archivo << "Horas Grados" << endl;
	archivo << "0 54.35 C" << endl;
	archivo << "1 60.7 C" << endl;
	archivo << "2 60.6 C" << endl;
	archivo << "3 60.3 C" << endl;
	archivo << "4 59.22 C" << endl;

	archivo << "5 41.85 F" << endl;
	archivo << "6 64.7 F" << endl;
	archivo << "7 47.6 F" << endl;
	archivo << "8 14.21 F" << endl;
	archivo << "9 64.2 C" << endl;

	archivo << "10 41.85 C" << endl;
	archivo << "11 36.21 F" << endl;
	archivo << "12 29.5 C" << endl;
	archivo << "13 35.01 C" << endl;
	archivo << "14 36.26 F" << endl;

	archivo << "15 41.85 C" << endl;
	archivo << "16 64.7 F" << endl;
	archivo << "17 47.6 F" << endl;
	archivo << "18 14.21 F" << endl;
	archivo << "19 64.2 F" << endl;

	archivo << "20 56.23 F" << endl;
	archivo << "21 54.21 F" << endl;
	archivo << "22 24.26 C" << endl;
	archivo << "23 35.21 C" << endl;
	archivo << "24 38.54 C" << endl;

	archivo << "25 32.21 F" << endl;
	archivo << "26 36.5 F" << endl;
	archivo << "27 12.2 C" << endl;
	archivo << "28 14.2 C" << endl;
	archivo << "29 15.5 C" << endl;

	archivo << "30 19.32 F" << endl;
	archivo << "31 22.2 C" << endl;
	archivo << "32 23.21 C" << endl;
	archivo << "33 21.3 F" << endl;
	archivo << "34 25.63 F" << endl;

	archivo << "35 31.2 F" << endl;
	archivo << "36 36.5 F" << endl;
	archivo << "37 31.2 C" << endl;
	archivo << "38 31 F" << endl;
	archivo << "39 14 F" << endl;

	archivo << "40 35.2 F" << endl;
	archivo << "41 36.4 F" << endl;
	archivo << "42 23.5 F" << endl;
	archivo << "43 23.5 F" << endl;
	archivo << "44 14.2 F" << endl;

	archivo << "45 21.3 C" << endl;
	archivo << "46 65.4 C" << endl;
	archivo << "47 56.6 C" << endl;
	archivo << "48 52.35 C" << endl;
	archivo << "49 45.63 F" << endl;

	archivo.close();


	ifstream archivo2;
	archivo2.open("raw_temps2.txt", ios::in);
	if (archivo2.fail()) {
		cout << "No se pudo abrir el archivo";
		exit(1);
	}
	vector<double> tems;
	string line;
	double mas = 0.0;

	while (getline(archivo2, line))
	{
		int n;
		double m;
		string c;
		archivo2 >> n >> m >> c;
		if (c == "C")
		{
			tems.push_back(m);
		}
		if (c == "F")
		{
			m -= 32;
			m *= 5;
			m = m / 5;
			tems.push_back(m);

		}
	}
	archivo2.close();

	for (int i = 0; i < 50; i++)
	{
		mas += tems[i];
	}

	int h, j, aux;

	for (h = 0; h < 49; h++)
	{
		for (j = 0; j < 49; j++)
		{
			if (tems[j] > tems[j + 1])
			{
				aux = tems[j];
				tems[j] = tems[j + 1];
				tems[j + 1] = aux;

			}
		}
	}

	cout << "la media es: " << mas / 50 << endl;
	cout << "la mediana es:" << tems[25] << endl;

	

}

int main()
{
	int numero;
	string sip;
	cout << "Cual ejercicio quieres usar?" << endl;
	cout << "1.Drill 2.ConcatenarTexto 3.Ejercicio1 4.store_temps 5.temp_stats 6.FarCelsiuos" << endl;
	cin >> numero;
	if (numero == 1)
	{
		Drill();
		cout << "Quieres usar otra ejercicio? si o no?" << endl;
		cin >> sip;
		if (sip == "si")
		{
			main();
		}
		if (sip == "no")
		{
			cout << "Que tenga un bonito dia usuario." << endl;
		}
		else
		{
			cout << "Que tenga un bonito dia usuario." << endl;
			cout << "Echo por Jorge Eduardo Fonseca Michel" << endl;
		}
	}
	if (numero == 2)
	{
		ConcatenarTexto();
		cout << "Quieres usar otra ejercicio? si o no?" << endl;
		cin >> sip;
		if (sip == "si")
		{
			main();
		}
		if (sip == "no")
		{
			cout << "Que tenga un bonito dia usuario." << endl;
		}
		else
		{
			cout << "Que tenga un bonito dia usuario." << endl;
			cout << "Echo por Jorge Eduardo Fonseca Michel" << endl;
		}
	}
	if (numero == 3)
	{
		Ejercicio1();
		cout << "Quieres usar otra ejercicio? si o no?" << endl;
		cin >> sip;
		if (sip == "si")
		{
			main();
		}
		if (sip == "no")
		{
			cout << "Que tenga un bonito dia usuario." << endl;
		}
		else
		{
			cout << "Que tenga un bonito dia usuario." << endl;
			cout << "Echo por Jorge Eduardo Fonseca Michel" << endl;
		}
	}
	if (numero == 4)
	{
		store_temps();
		cout << "Quieres usar otra ejercicio? si o no?" << endl;
		cin >> sip;
		if (sip == "si")
		{
			main();
		}
		if (sip == "no")
		{
			cout << "Que tenga un bonito dia usuario." << endl;
		}
		else
		{
			cout << "Que tenga un bonito dia usuario." << endl;
			cout << "Echo por Jorge Eduardo Fonseca Michel" << endl;
		}
	}
	if (numero == 5)
	{
		temp_stats();
		cout << "Quieres usar otra ejercicio? si o no?" << endl;
		cin >> sip;
		if (sip == "si")
		{
			main();
		}
		if (sip == "no")
		{
			cout << "Que tenga un bonito dia usuario." << endl;
		}
		else
		{
			cout << "Que tenga un bonito dia usuario." << endl;
			cout << "Echo por Jorge Eduardo Fonseca Michel" << endl;
		}
	}
	if (numero == 6)
	{
		FarCelsiuos();
		cout << "Quieres usar otra ejercicio? si o no?" << endl;
		cin >> sip;
		if (sip == "si")
		{
			main();
		}
		if (sip == "no")
		{
			cout << "Que tenga un bonito dia usuario." << endl;
		}
		else
		{
			cout << "Que tenga un bonito dia usuario." << endl;
			cout << "Echo por Jorge Eduardo Fonseca Michel" << endl;
		}
	}

	keep_window_open();

	return 0;
}