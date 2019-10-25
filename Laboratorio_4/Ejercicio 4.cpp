#include <iostream>

using namespace std;

struct nodo
{
    int dato;
    nodo *sig;
};


void llenarLista(nodo**pInicio,int numero)
{
    nodo *nuevo;
    nuevo = new nodo;
    nuevo->dato=numero;
    if(pInicio==NULL)
    {
        *pInicio=nuevo;
        (*pInicio)->sig=NULL;
    }
    else
    {

        nuevo->sig=*pInicio;
        *pInicio=nuevo;

    }
}

void suma(nodo*pInicio,int *sumaImpar,int *sumaPar)
{
    if(pInicio)
    {
        suma(pInicio->sig,sumaImpar,sumaPar);
        if(pInicio->dato%2==0)
        {
            *sumaPar=*sumaPar+pInicio->dato;
        }
        else
        {
            *sumaImpar=*sumaImpar+pInicio->dato;
        }

    }
}

int main()
{
   char respuesta;
    int numero,eliminar;
    struct nodo *pInicio=NULL;

    cout<<"Desea ingresar un numero a su lista? (s/n) ";
    cin>>respuesta;
    while(respuesta=='s')
    {
        cout<<"Ingrese el numero: ";
        cin>>numero;
        llenarLista(&pInicio,numero);
        cout<<"Desea ingresar otro numero a su lista (s/n): ";
        cin>>respuesta;
    }
    cout<<endl<<"los numeros de la lista son: ";

    {
        struct nodo *s;
        s=pInicio;
        while(s!=NULL)
            {
             cout<<s->dato<<" ";
             s=s->sig;
             }
    }

    cout<<endl;
    int sumaPar=0,sumaImpar=0;
    suma(pInicio,&sumaImpar,&sumaPar);
    cout<<"La suma de los pares es: "<<sumaPar;
    cout<<endl<<"La suma de los impares es: "<<sumaImpar;

}
