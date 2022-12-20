#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	long num=12, cuenta=25;
	cout<<"El numero almacenado es: "<<num<<endl;
	cout<<"Y la direccion es: "<<&num<<endl;
	cout<<"Memoria utilizada es:"<<sizeof(num)<<endl<<endl;
	cout<<"El numero almacenado es: "<<cuenta<<endl;
	cout<<"Y la direccion es: "<<&cuenta<<endl;
	cout<<"Memoria utilizada es:"<<sizeof(cuenta)<<endl;
	
	long fecha=1894;
	cout<<"El año almacenado es: "<<fecha<<endl;
	cout<<"La dirección es: "<<&fecha<<"\n";
	cout<<"Memoria utilizada es:"<<sizeof(float)<<endl;
	
	float nota=258;
	cout<<"El dato almacenado es: "<<nota<<endl;
	cout<<"La dirección es: "<<&nota<<"\n";
	cout<<"Memoria utilizada es:"<<sizeof(nota)<<endl;
	
	double potencia=3^2;
	cout<<"El resultado de potencia es: "<<potencia<<endl;
	cout<<"La dirección es"<<&potencia<<endl;
	cout<<"Memoria utilizada es:"<<sizeof(potencia)<<endl;
	
	return 0;
}
