//Ejercicio 2.
#include <iostream>
#include <cmath>
using namespace std;

struct nodo{
    float Co;
    float Ex;
    nodo *sig;
};

float EvaluarPoli(nodo* lista)
{
    if(lista){
        return pow(lista->Co, lista->Ex) + EvaluarPoli(lista->sig);
    }
    else{
        return 0;
    }
}

void maii ()
{   nodo* pInicio = NULL;

    float c, e;
    char resp;

    cout << "Digite el coeficiente: "<<endl; cin>>c;
    cout<<"Digite el exponente: "<<endl; cin>>e;

    cout<<"Desea seguir metiendo datos?"<<endl;
    cin >> resp;
    while(resp == 's')
    {
        nodo *nuevo =  new nodo;
        nuevo->Co = c;
        nuevo->Ex = e;
        nuevo->sig = NULL;

        nuevo->sig = pInicio;
        pInicio = nuevo;

    cout << "Digite el coeficiente: "<<endl; cin>>c;
    cout<<"Digite el exponente: "<<endl; cin>>e;
    cout<<"Desea seguir metiendo datos?"<<endl;
    cin >> resp;
    }
    cout<< "La suma es: "<<EvaluarPoli(pInicio)<<endl;
}

int main(void)
{
    maii();
}

