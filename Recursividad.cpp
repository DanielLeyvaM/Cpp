//Librerias
#include <iostream>
#define CAPACIDAD 20
using namespace std;

//Funciones
int escribe_numeros(int,int);

//Funcion principal
int main(){
	int ini,fin;
	cout<<"Ingrese num inicial: ";		cin>>ini;
	cout<<"Ingrese numero final: "; 	cin>>fin;
	
	escribe_numeros(ini,fin);
	return 0;
}

int escribe_numeros(int ini,int fin){
	int aux;
	if(ini==fin){
		cout<<" "<<ini;
		return ini;
	}
	else{
		aux=escribe_numeros(ini,fin-1);
		cout<<" "<<fin;
		return aux;	
	}		
}
