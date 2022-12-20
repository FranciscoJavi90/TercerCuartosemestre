#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Spanish");

    int ano=1;

    double depre=4000, valorMaquina=28000, depAcumulada=0;

    cout<<"Año  Depreciación   Valor Máquina    Depreciación Acumulada\n";

    while(ano <=7)
          {
            valorMaquina -= 4000;
            depAcumulada += depre;
            cout<<ano<<"\t"<<depre<<"\t\t"<<valorMaquina<<"\t\t"<<depAcumulada<<endl;
            ano++;
          }
    return 0;
}
