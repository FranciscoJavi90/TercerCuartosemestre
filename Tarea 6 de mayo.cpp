#include <iostream>
using namespace std;

struct Estudiante{
		int clave;
		string nombre;
		string apellido;
		int edad;
		Estudiante *siguiente;
};

typedef struct Estudiante * Nodo;

void buscar_estudiante(Nodo actual, int clave)
{
	if (clave==actual->clave)
		cout<<actual->clave<<" - "<<actual->nombre<<" - "<<actual->apellido<<" - "<<actual->edad<<endl;
	else
		if (actual->siguiente!=NULL)
		{
			buscar_estudiante(actual->siguiente, clave);
		}
		else
		{
			cout<<"El codigo no esta asignado a un estudiante.";
		}
}

void ingresar_registro(Nodo &actual, int clave, string nombre, string apellido, int edad)
{
	if (actual==NULL)
	{
		actual=new(Estudiante);
		actual->clave=clave;
		actual->nombre=nombre;
		actual->apellido=apellido;
		actual->edad=edad;
		actual->siguiente=NULL;
	}
	else
	{
		if(actual->siguiente==NULL)
		{
			Nodo aux;
			aux=new(Estudiante);
			aux->clave=clave;
			aux->nombre=nombre;
			aux->apellido=apellido;
			aux->edad=edad;
			aux->siguiente=NULL;
			actual->siguiente=aux;
		}
		else
		{
			ingresar_registro(actual->siguiente,clave,nombre,apellido,edad);
		}
	}
	
}

int main()
{
	Nodo inicio=NULL;
	int clave, edad;
	string nombre, apellido;
	for (int i=0; i<5; i++)
	{
		cout<<"Ingrese nombre: ";
		cin>>nombre;
		cout<<"Ingrese apellido: ";
		cin>>apellido;
		cout<<"Ingrese edad: ";
		cin>>edad;
		clave=i+1;
		ingresar_registro(inicio,clave,nombre,apellido,edad);
	}

	imprimir_listado(inicio);
	cout<<"Ingrese clave del estudiante a buscar: ";
	cin>>clave;
	
	buscar_estudiante(inicio, clave);
}
void imprimir_listado(Nodo actual)
{
	cout<<actual->clave<<" - "<<actual->nombre<<" - "<<actual->apellido<<" - "<<actual->edad<<endl;
	if (actual->siguiente!=NULL)
		imprimir_listado(actual->siguiente);
}


