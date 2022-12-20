//Declarar un arreglo que almacene quince datos de tipo entero y luego debe llenarlo con números aleatorios entre el rango de cero a cien.
//Crear una función que ordene los números del arreglo de forma ascendente.
//Crear una función que inserte los números del arreglo en una cola.  
//Crear una función que recorra la cola e identifique qué números son mayores que 20 y menores que 40.  Los números que cumplan con la condición deben ser ingresados en una pila y ordenados en forma descendente.
//Crear una función que imprima en pantalla los números que han sido insertados en la pila.
#include<iostream>
using namespace std;
struct Nodo{
 int num;
 Nodo*siguiente;
};
typedef struct Nodo *Cola;
bool vacia(Cola act)
{
 if (act == NULL)
  return true;
 else 
  return false;
}
void orden_arreglo(int a[], int b)
{
 int i, j;
 int x;
 for (i = 1; i < b; i ++)
 {
  j = i;
  x = a[i];
  while (j > 0 && x < a[j-1])
  {
   a[j] = a[j-1];
   j --;
  }
  a[j] = x; 
 }
}
void push(Cola &arreglo,int num)
{
 if (vacia(arreglo))
 {
  arreglo=new(Nodo);
  arreglo->num=num;
  arreglo->siguiente=NULL;
 }
 else
 {
  if(arreglo->siguiente==NULL)
  {
   Cola aux;
   aux = new(Nodo);
   aux->num=num;
   aux->siguiente=NULL;
   arreglo->siguiente=aux;
  }
  else
   push(arreglo->siguiente, num);
 }
}
void imprimir(pila actual)
{
	cout<<actual->numero<<" - ";
	if (actual->siguiente!=NULL)
		imprimir(actual->siguiente);
}
void orden_arreglo(int a[], int b)
{
 int i, j;
 int x;
 for (i = 1; i < b; i --)
 {
  j = i;
  x = a[i];
  while (j > 0 && x < a[j+1])
  {
   a[j] = a[j-1];
   j ++;
  }
  a[j] = x; 
 }
}
void imprimir(Cola act)
{
 if (act!=NULL)
 {
  cout<<act->num<<" - ";
  imprimir(act->siguiente);
 }
}
int main()
{
 Cola arreglo;

 int listado_arreglo[15] = {4, 5, 40, 80, 60, 6, 7, 87, 90, 99, 2, 15, 75, 65, 50};

 int i;
 for(i=0;i<15;i++)
 {
  push(arreglo, listado_arreglo[i]);
 }
 cout<<"Listado en Orden insertado"<<endl;
 imprimir(arreglo);
 cout<<endl;

 cout<<"Listado Ordenado de Ascendente";
 cout<<endl;
 orden_arreglo(listado_arreglo, 15);
 for (int i = 0; i < 15; i ++)
 {
  cout<<listado_arreglo[i]<<" - ";
 }
 cout<<endl;
}

