//Bibliotecas
//Bibliotecas
#include <iostream>

//Constantes
#define CARACTERES 20
#define CANTIDAD 2
using namespace std;

//Estructuras
typedef struct registro{
	char nombre[CARACTERES];
	int edad;
	float promedio;	
} registro;

//Funcion principal
int main(){
	int aux=0;
	registro alumnos[CANTIDAD];
	for(int i=0; i<CANTIDAD;i++){
		fflush(stdin);
		cout<<"Ingrese nombre alumno "<<i+1<<" : ";			
		cin.getline(alumnos[i].nombre,CARACTERES,'\n');
		cout<<"Ingrese edad alumno "<<i+1<<" : ";;			
		cin>>alumnos[i].edad;
		cout<<"Ingrese promedio alumno "<<i+1<<" : ";;		
		cin>>alumnos[i].promedio;
		
		if(alumnos[i].promedio>alumnos[i+1].promedio)
			aux=i;
	}
	
	cout<<"Nombre alumno: "<<alumnos[aux].nombre<<endl;
	cout<<"Edad alumno: "<<alumnos[aux].edad<<endl;
	cout<<"Promedio alumno: "<<alumnos[aux].promedio;
	return 0;		
}

