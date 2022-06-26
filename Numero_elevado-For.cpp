 //Bibliotecas
 #include <iostream>
 using namespace std;
 
 //Funcion principal
 int main(){
 	int x,y,resultado=1;
 	cout<<"Ingrese un numero a elevar: ";
 	cin>>x;
 	cout<<"Ingrese numero exponente: ";
 	cin>>y;
 	
 	for(int i=0;i<y;i++){
 		resultado=resultado*x;
	 }
 	cout<<"El numero "<<x<<" elevado a "<<y<<" = "<<resultado;
	return 0;
}
