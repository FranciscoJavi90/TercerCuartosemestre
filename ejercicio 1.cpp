#include <iostream>

using namespace std;
struct Nodo{
 int numero;
 Nodo *siguiente;
};
typedef struct Nodo *Pila;
void suma(int &valores)
{
 int numero;
 numero=valores+30;
}
bool vacia(Pila actual)
{
 if (actual==NULL)
  return true;
 else
  return false;
}
void push(Pila &cima, int numero)
{
 if (vacia(cima))
 {
  cima=new(Nodo);
  cima->numero=numero;
  cima->siguiente=NULL;
 }
 else
 {
  Pila aux;
  aux=new(Nodo);
  aux->numero=numero;
  aux->siguiente=cima;
  cima=aux;
 }
}
int pop(Pila &cima)
{
 if (cima != NULL)   
 { 
  Pila aux;
  int dato;
  aux=cima->siguiente;
  dato=cima->numero;
  cima->siguiente=NULL;
  delete(cima);
  cima=aux;
  return dato;  
 }
 else
  return -1;
}
void imprimir(Pila actual)
{
 if (actual!=NULL)   
 {
  cout<<actual->numero<<" - ";
  imprimir(actual->siguiente);
 }
}
void limpiar_pila(Pila actual)
{
 if (!vacia(actual))
 {
  Pila aux;
  aux=actual->siguiente;
  actual->siguiente=NULL;
  delete(actual);
  actual=aux;
  limpiar_pila(actual);
 }
}
int main(){
 int valores[15];
 Pila pila1=NULL;
 for(int i=0;i<15; i++)
 {
  cout<<"Ingrese numeros en el rango de 0 a 100: ";
  cin>>valores[15];
  suma(valores[15]);
  push(pila1, valores[15]);
 }
 imprimir(pila1);
 limpiar_pila(pila1);
}


