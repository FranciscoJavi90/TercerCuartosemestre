#include <iostream>
#include <math.h>
#include <conio.h>


using namespace std;
void iniciar(int m[5][5]);

int main()
{
	fstream archivo;
	int n;
	archivo.open("C:\Users\Jairo\OneDrive\Escritorio\Ingenieria en sistemas 3ro. semestre\Programacion 1\numeros.xls",ios::app);
	cout<<"Ingrese un numero negativo o positivo";
	archivo<<"Ingrese un numero negativo o positivo";
	cin>>n;
	archivo>>n;
	archivo.close();
	
	
	int m[5][5];
	int i, j;
	int fila, columna;
	int opcion;
	for (i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			m[5][5];
		}
	}
	
	while(opcion==1)
	{
		iniciar(m);
		cout<<"endl";
		cout<<"Ingresa un numero: ";
		cin>>fila>>columna;
	}
	return 0;	
}
