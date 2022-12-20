#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

struct nodo{
	int numero;
	nodo *siguiente;
	};
	
	typedef struct nodo *pila;
	bool vacia (pila actual)
{
	if (actual==NULL)
		return true;
	else 
		return false;
}

void push(pila &cima, int numero)
{
	if (vacia(cima))
	{
		cima=new(Nodo);
		cima->numero=numero;
		cima->siguiente=NULL;
	}
	else
	{
		pila aux;
		aux=new(Nodo);
		aux->numero=numero;
		aux->siguiente=cima;
		cima=aux;
	}
}

int pop(pila &cima)
{
	pila aux;
	int dato;
	aux=cima->siguiente;
	dato=cima->numero;
	cima->siguiente=NULL;
	delete(cima);
	cima=aux;
	return dato;
}

void imprimir(pila actual)
{
	cout<<actual->numero<<" - ";
	if (actual->siguiente!=NULL)
		imprimir(actual->siguiente);
}



int main()
{
Pila cima=NULL;
	int ingreso[15];
	for (int i=0;i<15;i++)
	{
		ingreso[i]= o+rand()%100;
		push(cima, ingreso[i]);
	}	
		imprimir(cima);
		if (vacia(cima))
		
		cout<<"pila vacia";
	else
		cout<<"pila con elementos";
		
		
system("pause");
return 0;
}

