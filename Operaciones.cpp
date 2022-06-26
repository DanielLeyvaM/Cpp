//Biblotecas
#include <iostream>

//Para no usar std:: para ingresar y mostar datos
using namespace std;

//funcion principal
int main(void){
	int n1,n2,suma,resta,multiplicacion,division,modulo,exponente;
	cout<<"Ingrese numero 1: ";
	cin>>n1;
	cout<<"Ingrese nuemro 2: ";
	cin>>n2;
	
	//operaciones
	suma=n1+n2;			resta=n1-n2;	multiplicacion=n1*n2;
	division=n1/n2;		modulo=n1%n2;	
	
	cout<<"\nEl resultado de sumar "<<n1<<" + "<<n2<<" es: "<<suma<<endl; 	
	cout<<"El resultado de restar "<<n1<<" - "<<n2<<" es: "<<resta<<endl;
	cout<<"El resultado de multiplicar "<<n1<<" * "<<n2<<" es: "<<multiplicacion<<endl;
	cout<<"El resultado de dividir "<<n1<<" / "<<n2<<" es: "<<division<<endl;
	cout<<"El resultado de modulo "<<n1<<" % "<<n2<<" es: "<<modulo<<endl;
	
	return 0;
}
