//Ejercicio 1.
#include <iostream>
using namespace std;
int euclides(int mayor, int menor, int mcd)
{
 if(mcd==0)
    return menor;

else{
    mayor=menor;
    menor=mcd;
    mcd=mayor%menor;
    return euclides(mayor, menor, mcd);
}
}
int main()
{
    int mayor=0, menor=0;
    cout << "Ingrese Mayor: "<< endl; cin >> mayor;
    cout << "Ingrese Menor: "<< endl; cin >> menor;

    int mcd= mayor%menor;
    cout << "MCD: "<<euclides(mayor, menor, mcd);

}
