#include "Includes.h"
#include <iostream>


int main()
{

	// Ejercicio 1 Drill
	/*
	int valor1 = 0;
	int valor2 = 0;
	char c1 = '|';
	int cancel = c1;

	while (valor1 || valor2 != c1)
	{
		cout << "Escribe dos numeros o |\n";
		cin >> valor1 >> valor2;
		cout << "Tus numeros son: " << valor1 << "\n"; valor2;
	}
	*/

	//Ejercicio 5
	/*
	cout << "Ingrese los valores ordenadamente asi y el operando depende de lo que quieras: (+,-,*,/) 2.5 6.5\n";
	string operando;
	double val1;
	double val2;
	cin >> operando;
	cin >> val1;
	cin >> val2;
	if (operando == "+")
		cout << "Es una Suma de los valores:  " << val1 << " y " << val2 << " es " << val1 + val2 << "\n";
	if (operando == "-")
		cout << "Es una Resta de los valores:  " << val1 << " y " << val2 << " es " << val1 - val2 << "\n";
	if (operando == "*")
		cout << "Es una Multiplicacion de los valores:  " << val1 << " y " << val2 << " es " << val1 * val2 << "\n";
	if (operando == "/")
		cout << "Es una Division de los valores:  " << val1 << " y " << val2 << " es " << val1 / val2 << "\n";
	keep_window_open();
	*/

	//Ejercicio 3
	/*
	vector<double>distancia;
	string seguir;
	double menor = 0.0;
	double mayor =0.0;
	double val1 = 0.0;
	double Suma = 0.0;
	while (true)
	{
		cout << "Agregar una distancia entre ciudades? si o no\n ";
		cin >> seguir;
		if (seguir == "si")
		{
			cin >> val1;
			distancia.push_back(val1);
		}
		if (seguir == "no")
		{
			break;
		}
	}
	for(int i = 0; i < distancia.size(); ++i) //No se porque no esta agarrando el for.
	{
		Suma = Suma + distancia[i];
		if (distancia[i] >= distancia[i +1] || distancia[i])
		{
			distancia[i] = mayor;
		}
		if (distancia[i] <= distancia[i + 1] || distancia[i])
		{
			distancia[i] = menor;
		}
	}
	cout << "La Distancia entre las ciudades es: " << Suma << "\n";
	cout << "La Distancia mas grande entre ciudades: " << mayor << "\n";
	cout << "La Distancia mas chica entre cuiudades es: " << menor << "\n";
	cout << "\n";
	keep_window_open();
	*/
	// ejercicio 6
	/*
	string siono;
	int n = 0;
	cout << "Piense en un numero de el 1 al 100\n";
	for(int i = 0;i < 7; ++i)
		cout << i << ".Su numero es mas grande que 50. si o no";
		cin >> siono;
		if (siono == "si")
		{
			n = 51;
		}
		if()
		{
			n = 49;
		}
	*/
	// Ejercicio 8 y 9
	
	// double arroz = 1;
	/*
	int arroz = 1;

	for(int i = 1; i <= 64; i++)
	{
		cout << "El dia " << i << " le dieron la cantidad de " << arroz << "\n";
		arroz = arroz * 2;
		if(arroz >= 1000 && arroz <=2000)
		{
			cout << "El dia que consiguio 1000 es " << i << " le dieron la cantidad de " << arroz << "\n";
		}
		if (arroz >= 1000000 && arroz <= 2000000)
		{
			cout << "El dia que consiguio 1,000,000 es " << i << " le dieron la cantidad de " << arroz << "\n";
		}
		if (arroz >= 1000000000 && arroz <= 2000000000)
		{
			cout << "El dia que consiguio 1000 es " << i << " le dieron la cantidad de " << arroz << "\n";
		}

	}
	cout << "El dia que ya no aparecen int es en el dia 33\n";
	cout << "El dia que ya no aparecen double es en el dia 64\n";
	keep_window_open();
	*/	
	// Ejercicio 10
	/*
	for(int i = 2;i<=100;i++)
	{
		if (i/2==0 && i/3==0 && i/5==0 && i/7==0 && i/11==0)
		{
			cout << "El el numero  "<< i << " no es numero primo\n";
		}
		if ( i/2 ==!0 && i/3 ==!0 && i/5 ==!0&& i/7==!0 && i/11 ==!0)
		{
		cout << "El el numero  " << i << "  es numero primo\n";
		}
	}
	keep_window_open();
	*/
	// Ejercicio 18
	/*
	double cuadratica = 0.0;
	double x = 0.0;
	double numero = 0.0;
	double valor1 = 0.0;
	double valor2 = 0.0;
cout << "A continuacion agregaras los valores d la ecuacion cuadratica: \n";
	cout << "ingrese el cuadrado \n";
	cin >> cuadratica;
	cout << "Agregue la x: \n";
	cin >> x;
	cout << "Agrege el numero: \n";
	cin >> numero;
	cout << "Su ecuacion cuadratica es: " << cuadratica << "x cuadrada + " << x << "x + " << numero << "\n";
	cout << "\n";
	valor1 = -x+(sqrt((x*x) - 4*(cuadratica*numero)) / 2 * cuadratica);
	valor1 = -x-(sqrt((x*x) - 4*(cuadratica*numero)) / 2 * cuadratica);
	cout << "la solucion de la ecuacion es Valor 1 = " << valor1 << "\n";
	cout << "la solucion de la ecuacion es Valor 2 = " << valor2 << "\n";
	keep_window_open();
	*/
	
}
