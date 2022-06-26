//Bibliotecas
#include <iostream>
using namespace std;

//Funcion principal
int main(){
	int n1,n2,n3;
	
	cout<<"Digite 3 numeros: ";
	cin>>n1>>n2>>n3;
	
	if(n1>n2 && n1>n3){
		cout<<"El numero "<<n1<<" es el mayor";
	}
	if(n2>n1 && n2>n3){
		cout<<"El numero "<<n2<<" es el mayor";
	}
	if(n3>n2 && n3>n1){
		cout<<"El numero "<<n3<<" es el mayor";
	}
	
	return 0;
}

