//Ejercicio 5
#include <iostream>
using namespace std;
struct nodo
{
    int dato;
    nodo *sig;
};

class ListaSimple
{
private:
    nodo *pInicio;

public:
    ListaSimple(void)
    {
        cout << "Inicializando Lista" << endl;
        pInicio = NULL;
    }

    void insertarInicioLista(int dato)
    {
        nodo *nuevo;
        nuevo = new nodo;
        nuevo -> dato = dato;
        nuevo -> sig = pInicio;
        pInicio = nuevo;
    }

    void ListaRec(void){
        ListaRec(pInicio);
    }


    void ListaRec(nodo *s){
        if(s!=NULL){
          ListaRec(s -> sig);
          cout << s -> dato << " ";
        }
    }
};

int main()
{

    ListaSimple miLista;
    char resp;
    int dato;

        cout << "¿Desea meter un dato(s/n)?";
        cin >> resp;
        while(resp == 's')
    {
        cout << "Digite el dato: ";
        cin >> dato;
        miLista.insertarInicioLista(dato);
        cout << "Desea meter un dato (s/n)?";
        cin >> resp;
    }

    cout << "\nlista recursiva (sentido inverso): " << endl;
    miLista.ListaRec();

return 0;

}



