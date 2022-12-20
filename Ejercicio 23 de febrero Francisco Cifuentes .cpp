#include <iostream>
using namespace std;

void orden_insercion (double a[], int n)
{
	int i, j;
	int aux;
	for (i=1; i < n; i++)
	{
		j = i;
		aux=a[i];
		while (j > 0 && aux < a[j-1])
		{
			a[j] = a[j-1];
			j--;
		}
		a[j] = aux;
	}
}

int main()
{
	double arreglo[10];
	int opcion=0;
	cout<<"Ingrese 10 numeros positivos enteros para ordenar.\n";
	for (int i=0;i<10;i++)
	{
		cin>>arreglo[i]; 
	}
	orden_insercion(arreglo, 10);
	for (int i=0;i<10;i++)
		 cout<<arreglo[i]<<" ";
}

