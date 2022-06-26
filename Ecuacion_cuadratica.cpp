//Bibliotecas
#include <iostream>
#include <math.h>		//Permite obtener ciertos comandos operaciones

using namespace std;

//Funcion principal
int main(){
	float a,b,c,x1=0,x2=0;
	cout<<"Digite valor de a: ";	cin>>a;
	cout<<"Digite valor de b: ";	cin>>b;
	cout<<"Digite valor de c: ";	cin>>c;
	
	x1=(-b+(sqrt(pow(b,2)-4*a*c)))/(2*a);
	x2=(-b-(sqrt(pow(b,2)-4*a*c)))/(2*a);
	
	cout<<"\nEl valor de x1 es: "<<x1<<endl;
	cout<<"El valor de x2 es: "<<x2<<endl;
	return 0;
}
