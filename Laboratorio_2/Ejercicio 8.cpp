//Omar Rafael Flores Alas 00038619
//Ejercicio 8.
#include <iostream>
using namespace std;

int num_digitos(int num)
{
	return num < 10 ? 1 : 1 + num_digitos(num / 10);
}

int main()
{
	int num;
	cout << "Digite un entero: "; cin >> num;

	cout << "El numero tiene " << num_digitos(num) << " digitos" << endl;

	return 0;
}

