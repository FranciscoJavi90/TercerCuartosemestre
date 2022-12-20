#include <iostream>
using namespace std;

struct numeros{
	int numero;
	numeros *siguiente;	
};
void imprimir_listado(numeros *actual)
{
	while (actual!=NULL)
	{
		cout<<actual->numero<<" ";
		actual=actual->siguiente;
	}
	
}

int modificar(numeros *actual,int n_actual,int n_remplazo)
{
	int encontrado=0;
	while(actual!=NULL)
	{
		if (actual->numero==n_actual)
		{
			actual->numero=n_remplazo;
			encontrado=1;
			break;
		}
		actual=actual->siguiente;
	}
	return encontrado;
}

int posicion(numeros *actual, int numero)
{
	int contador=0, encontrado=0;
	while(actual!=NULL)
	{
		if (actual->numero==numero)
		{
			encontrado=1;
			break;
		}
		actual=actual->siguiente;
		contador++;
	}
	if (encontrado==1)
		return contador+1;
	else
		return -1;
}

int main()
{
	//inicio almacena la dirección del primer registro del listado
	//fin almacena la dirección del último registro del listado
	numeros *inicio=NULL,*aux,*fin=NULL;
	int ingreso=1;
	while(ingreso!=0)
	{
		cout<<"Ingrese un numero: ";
		cin>>ingreso;
		if(ingreso!=0)
			if(inicio==NULL)
			{
				inicio=new(numeros);
				inicio->numero=ingreso;
				inicio->siguiente=NULL;
				fin=inicio;
			}
			else
			{
				aux=new(numeros);
				aux->numero=ingreso;
				aux->siguiente=NULL;
				fin->siguiente=aux;
				fin=aux;
			}
	}

	imprimir_listado(inicio);
	if (modificar(inicio, 12, 100))
		cout<<"\nSe remplazo con exito el numero";
	else
		cout<<"\nEl numero no se encuentra almacenado en el listado";
	cout<<endl;
	imprimir_listado(inicio);

/*
	int pos=posicion(inicio, 6);
	if (pos!=-1)
		cout<<"El numero se encuentra en la posicion: "<<pos;
	else
		cout<<"El numero no se encuentra almacenado en el listado";
*/		
	//imprimir_listado(inicio);
/*	do{
		
	}while(ingreso!=0);
*/	
}



