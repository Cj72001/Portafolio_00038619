//Ejercicio 8 
#include <iostream>
#include <cstdlib>

using namespace std;
void conteo(int n, int x)
{
	if (n == 1)
		cout << 1 << endl;
	else
	{
		conteo(n - 1, x);
		cout << n << endl;
	}
	if (n == x)
	{
		for(int i=n;i>=1;i--)
			cout<<i<<endl;
	}
}	

int main() {
	int n,x;
	cout << "Ingrese un numero: " << endl; cin >> n;
	cout << endl;
	x = n;

	conteo(n, x);

    return 0;
}


