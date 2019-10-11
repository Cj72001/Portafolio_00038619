//Ejercicio1
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct nodo{
    int dato;
    nodo *sig;
};


class ListaSimple{

private:
nodo *pInicio;

public:

    ListaSimple(void) {
    pInicio = NULL;
}
void insertarInicioLista(int dato) {
    nodo *nuevo;
    nuevo = new nodo;
    nuevo->dato = dato;
    nuevo->sig = pInicio;
    pInicio = nuevo;
}

void mostrarListaRec(void) {
    mostrarListaRec(pInicio);
}

void mostrarListaRec(nodo *s) {
    if (s != NULL) {
        mostrarListaRec(s->sig);
        cout << s->dato << " ";
    }
}

void pares(void) {
    pares(pInicio);
}

void pares(nodo *s) {
    if (s != NULL) {
        cout << s->dato << " ";
    pares(s->sig);
    }
}

void mostrarListaPar(void) {
    nodo *s = pInicio;

    cout << "Los elementos pares de la lista son:" << endl;

    while (s != NULL ) {
        if(s->dato%2 == 0){
        cout << s->dato << " ";
		}
        s = s->sig;

    }
}

void mostrarListaImpar(void) {
    nodo *s = pInicio;

    cout << "Los elementos Impares de la lista son:" << endl;

    while (s != NULL ) {
        if(s->dato%2 != 0){
        cout << s->dato << " ";
		}
        s = s->sig;

    }
}

void mostrarListaRecD(void) {
    mostrarListaRecD(pInicio);
}

void mostrarListaRecD(nodo *s) {
    if (s != NULL) {
        cout << s->dato << " ";
        mostrarListaRecD(s->sig);
    }
}

};


int main()
{
    ListaSimple miLista;
    char resp;
    int dato, datoRef;


   srand(time(NULL));
   int i, n, aleatorio, inicio=1, final=100;
   cout << "Numeros aleatorios entre " << inicio << " y " << final << endl;
   cout << "Cuantos numeros aleatorios quiere generar? ";
   cin >> n;
   for (i = 1; i <= n; i ++)
   {
             aleatorio = rand()%(final-inicio+1)+inicio;

             miLista.insertarInicioLista(aleatorio);
   }

    cout << "\nLos numeros generados son:" << endl;
    miLista.mostrarListaRec();

    cout<<endl;

    cout<<endl;

    miLista.mostrarListaPar();

    cout<<endl;
    cout<<endl;

    miLista.mostrarListaImpar();

    cout<<endl;

    cout << "\nLista (sentido inverso, recursiva):" << endl;
    miLista.mostrarListaRecD();

    cout<<endl;


}
