//Librerias
#include <iostream>
#define CAPACIDAD 10
using namespace std;

//Funcion principal
int main(){
	int vector[CAPACIDAD],tam=0;
	int* puntero;
	puntero=vector;							//Se apunta al vector
	
	cout<<"Ingrese tamaño del vector: ";
	cin>>tam;
	//LLenado del vector
	for (int i=0;i<tam;i++){
		cout<<"Ingrese numero ["<<i<<"]: ";
		cin>>vector[i];
	}
	
	//Manejo de punteros
	for (int i=0;i<tam;i++){
		cout<<"Valor: ["<<i<<"]: "<<*puntero++<<endl;
		cout<<"Direccion memoria: ["<<i<<"]: "<<puntero++<<endl;
	}
	
}

