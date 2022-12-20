#include <iostream>
#include <fstream>
#include <iomanip>
#include <conio.h>

using namespace std;

struct datos{
	int codigo;
	char nombre[15];
	char apellido[15];
	char telefono[8];
	char activo;
};

void ingresar_alumno(fstream &arch)
{
	datos estudiante;
	cout<<"Ingrese código: ";
	cin>>estudiante.codigo;
	cout<<"Ingrese nombre: ";
	cin>>estudiante.nombre;
	cout<<"Ingrese apellido: ";
	cin>>estudiante.apellido;
	cout<<"Ingrese teléfono: ";
	cin>>estudiante.telefono;
	arch.seekp((estudiante.codigo-1)*sizeof(datos),ios::cur);
	arch.write(reinterpret_cast<const char *>(&estudiante),sizeof(datos));
}


void buscar_alumno(fstream &arch)
{
	int codigo;
	datos estudiante;
	cout<<"Ingrese código de estudiante a buscar: ";
	cin>>codigo;
	arch.seekg((codigo-1)*sizeof(datos));	
	arch.read(reinterpret_cast<char *>(&estudiante),sizeof(datos));
	cout<<left
		<<setw(sizeof(estudiante.codigo))<<estudiante.codigo
		<<setw(sizeof(estudiante.nombre))<<estudiante.nombre
		<<setw(sizeof(estudiante.apellido))<<estudiante.apellido
		<<setw(sizeof(estudiante.telefono))<<estudiante.telefono;
	
}


void enlistar_alumnos(fstream &arch)
{
	datos estudiante;
	arch.read(reinterpret_cast<char *>(&estudiante),sizeof(datos));
	while (!arch.eof())
	{
		if (estudiante.codigo!=0)
		{
			cout<<left
				<<setw(sizeof(estudiante.codigo))<<estudiante.codigo
				<<setw(sizeof(estudiante.nombre))<<estudiante.nombre
				<<setw(sizeof(estudiante.apellido))<<estudiante.apellido
				<<setw(sizeof(estudiante.telefono))<<estudiante.telefono<<endl;
		}
		arch.read(reinterpret_cast<char *>(&estudiante),sizeof(datos));
	}	
}

int main()
{ 
	fstream archivo,archivo2;
	datos estudiante;
	char opcion;
	
	archivo2.open("archivo2.txt",ios::in|ios::binary);
	if(archivo2==NULL)
	{
		archivo.open("archivo2.txt",ios::out|ios::binary);
		archivo.close();
	}
	
	setlocale(LC_ALL, "");
	do{	
		clrscr();	
		system("CLS");
		cout<<"1. Igresar estudiante."<<endl;
		cout<<"2. Buscar estudiante."<<endl;
		cout<<"3. Enlistar estudiantes."<<endl;		
		cout<<"4. Modificar registro de estudiante. ";		
		cout<<"5. Eliminar estudiante. ";
		cout<<"6. Salir.";
		
		opcion=getche();
		archivo.open("archivo2.txt",ios::out|ios::in|ios::binary);
		if (archivo.fail())
		{
			cout<<"Error al abrir el archivo. ";
			exit(1);
		}
		switch(opcion)
		{
			case '1':
					 	system("CLS");
						ingresar_alumno(archivo);
					 	archivo.close();
					 	break;
			case '2':
					 	system("CLS");
					 	buscar_alumno(archivo);
					 	system("PAUSE")
					 	getch();
					 	archivo.close();
					 	break;
			case '3':
					 	system("CLS");
					 	enlistar_alumnos(archivo);
					 	archivo.close();
					 	getch();
					 	break;
			case '6':	
						cout<<"\n\nEl programa finaliza correctamente. ";	 
		}
		
	}while(opcion!='6');
	
	return 0;
}
