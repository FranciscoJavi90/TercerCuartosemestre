#include <iostream>
using namespace std;

int main()
{
	int array[]={0,0,0,0,0};
	int i, j, aux, num, inf, sup, mitad, dato;
	
	cout<<"Arreglo de 5 posiciones"<<endl;
	
	for (i=0;i<5;i++)
	{
		cout<<"Digite un numero: ";
		cin>>array[i];
	}
	
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
		{
			if (array[j]>array[j+1])
			{
				aux=array[j];
				array[j]=array[j+1];
				array[j+1]=aux;
			}
		}
	}
	
	cout<<"Orden Ascendente:  ";	
	for (i=0;i<5;i++)
	{
		cout<<array[i];
	}

	cout<<"\n\n\tDigite el numero a buscar: ";
	cin>>dato;
	
	if(dato>=1 && dato<=5)
    {
        bool flag=false;
        inf=0;
        sup=5;
        while(inf != sup)
        {
            mitad=(inf+sup)/2;
            if(array[mitad] == dato)
            {
                flag=true; 
                break;
            }
            if(array[mitad] > dato)
            {
                sup=mitad;
                mitad=(inf+sup)/2;
            }
            if(array[mitad] < dato)
            {
                inf=mitad;
                mitad=(inf+sup)/2;
            }
        }
        
        if(flag)
            cout<<"El número se encontro en la posicion "<<mitad<<endl;
    }
    else
        cout<<"No se ha podido encontrar el número"<<endl;    

return 0;
}
	

