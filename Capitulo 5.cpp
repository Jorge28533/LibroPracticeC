#include "Includes.h"

int main()
{
	/*
	int s1 = area(7; // En esta le falta un parentesis
	int s2 = area(7) // En esta falta el punto y coma
	Int s3 = area(7); // En este el int tiene mayuscula la i y esta mal
	int s4 = area('7);  En este la coma hace el error

	int x0 = arena(7); // llamar a otra funcion es el error y sies que existe a ver si acepta ese vañor y no es lo que quieres que haga.
	int x1 = area(7); // Es un error por falta de la cantidad que espera la funcion
	int x2 = area("seven", 2); // el copilador no ba agarrar el string, espera puros enteros.

	int x4 = area(10, –7);       // no avisto que deberian ser positivos los valores
	int x5 = area(10.7, 9.3);   // aqui no puede tomaros por los flotantees deberia ser 10, 9.
	char x6 = area(100, 9999); // se asignara a un char el valor

	vector<double> temps;
	for (double temp; cin >> temp; )
		temps.push_back(temp);
	double sum = 0;
	double high_temp = 0;
	double low_temp = 0;
	for (double x : temps)
	{
		if (x > high_temp) high_temp = x;    // find high
		if(x < low_temp) low_temp = x;    // find low
		sum += x;           // compute sum
	}
	cout << "High temperature: " << high_temp << '\n';
	cout << "Low temperature: " << low_temp << '\n';
	cout << "Average temperature: " << sum / temps.size() << '\n';
	keep_window_open();
	*/

	// Try Diss
	/*
	cout << "1.Success!\n";
	cout << "2.Success!\n";
	cout << "3.Success!" << "\n";
	cout << "4.Success!" << "\n";
	int res = 7; vector<int> v1(10); v1[5] = res; cout << "5.Success!\n";
	vector<int> v(10); v[5] = 7; if (v[5] == 7) cout << "6.Success!\n";
	if (v1[5] == res) cout << "7.Success!\n"; else cout << "7.Fail!\n";
	bool c = true; if (c) cout << "8.Success!\n"; else cout << "8.Fail!\n";
	string s = "ape"; string ñ = "fool"; if(ñ >= s) cout << "9.Success!\n";
	string a = "ape"; if (a == "ape") cout << "10.Success!\n";
	string b = "ape"; if (b == "ape") cout << "11.Success!\n";
	string d = "ape"; if (d == "ape") cout << "12.Success!\n";
	//vector<int> v2(5); for (int i = 0; i < v2.size(); ++i);
	cout << "13.Success!\n";
	//vector<int> v3(5); for (int i = 0; i <= v3.size(); ++i);
	cout << "14.Success!\n";
	string sj = "15.Success!\n"; for (int i = 0; i < sj.size(); ++i) cout << sj[i];
	if (true) cout << "16.Success!\n"; else cout << "16.Fail!\n";
	int x = 2000; int cr = x; if (cr == 2000) cout << "17.Success!\n";
	string sr = "18.Success!\n"; for (int i = 0; i < sr.size(); ++i) cout << sr[i];
	vector <int> vn(5); for (int i = 0; i <= vn.size(); ++i); cout << "19.Success!\n";
	int in = 0; int j = 9; while (in >= 10) ++j; if (j >= in) cout << "20.Success!\n";
	int xe = 2; double de = 5/2; if (de == 2 * xe + 0.5) cout << "21.Success!\n";
	string sa = "22.Success!\n"; for (int ie = 0; ie <= sa.size(); ++ie) cout << sa[ie];
	int jo = 0;  int ia = 0; while (ia >= 10) ++jo; if (jo <= ia) cout << "23.Success!\n";
	int xn = 4; double di = 9/2; if (di = 2 * x + 0.5) cout << "24.Success!\n";
	cout << "25.Success!\n";
	keep_window_open()
	*/

	//Ejercicio 2
	/*
	double k = 0.0;
	cout << "Ingrese un grado que quiera convertir a calvin\n";
	cin >> k;
		 k = k + 273.15;
		cout << k << " Grados kalvin\n";
	keep_window_open();
	*/

	// Ejercicio 5
	/*
	double k = 0.0;
	int eleccion = 0;
	cout << "Ingrese 1 si quiere convertir de Celsius a Fahrenheit\n";
	cout << "Ingrese 2 si quiere convertir de  Fahrenheitto a Celsius\n";
	cin >> eleccion;
	if (eleccion == 1)
	{
		cout << "Ingrese El valor que quieras convertir a Fahrenheit\n";
		cin >> k;
		k = k + 32;
		cout << k << " Grados Fahrenheit\n";

	}
	if (eleccion == 2)
	{
		cout << "Ingrese El valor que quieras convertir a Celsius\n";
		cin >> k;
		k = k - 32;
		cout << k << " Grados Celsius\n";

	}
	keep_window_open();
	*/

	//Ejercicio 7
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
	cin	>> x;
	cout << "Agrege el numero: \n";
	cin >> numero;
	cout << "Su ecuacion cuadratica es: " << cuadratica << "x cuadrada + " << x << "x + " << numero << "\n";
	cout << "\n";
	valor1 = -x + (sqrt((x*x) - 4 * (cuadratica*numero)) / 2 * cuadratica);
	valor1 = -x - (sqrt((x*x) - 4 * (cuadratica*numero)) / 2 * cuadratica);
	if(valor1 && valor2 < 0.0)
	{
		cout << "la solucion de la ecuacion es Valor 1 = " << valor1 << "\n";
		cout << "la solucion de la ecuacion es Valor 2 = " << valor2 << "\n";
	}
	if (valor1 && valor2 >= 0.0)
	{
		cout << "la solucion de la ecuacion es Valor 1 = " << valor1 << "\n";
		cout << "la solucion de la ecuacion es Valor 2 = " << valor2 << "\n";
	}
	keep_window_open();
	*/
	/*
	//No se que tiene el for que no lo agarra pero me esfuerzo de verdad me esfuerzo
	vector <int> suma;
	cout << "Cuantos valores quieres  meter\n";
	int vueltas = 0;
	int numero = 0;
	int tu = 0;
	int camino = 0;
	cin >> vueltas;
	for (int i = 0; i >= vueltas; ++i)
		cout << "que numero quieres meter?\n";
		cin >> numero;
		suma.push_back(numero);

	cout << "cuantos numeros quieres sumar??\n";
	cin >> camino;
	for (int q = 0; q>= camino; ++q)
	{
		tu += suma[q];
		cout << "La suma de los primeros " << q << " es " << tu << "\n";
	}
	*/




}
