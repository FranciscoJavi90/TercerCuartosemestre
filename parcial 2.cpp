#include <iostream>
#include <locale.h>
#include <conio.h>

int fibonacci_ciclo(int n=9)
{
     int previo=0, actual=1,siguiente,contador;
     if ((n==1) || (n==0))
          return(n);
     else
     {
          for(contador=1;contador<n;contador++)
          {
               siguiente=previo+actual;
               previo=actual;
               actual=siguiente;  
          }
          return(siguiente);
     } 
}  


