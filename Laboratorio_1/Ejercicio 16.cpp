//Ejercicio 16.
#include <iostream>
using namespace std;
int main ()
{
    int n, a[10],s;
    cout << "Ingrese 10 enteros."<<endl;
    for (int i=0; i<10;i++)
    {
        cout <<"-Elemento "<<i<<endl; cin>>a[i];
        s=s+a[i];
    }
    cout<<"La sumatoria es: "<<s<<endl;
    cout<<"El promedio es: "<<s/10<<endl;


return 0;
}

