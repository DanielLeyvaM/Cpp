 //Librerias
 #include <iostream>
 using namespace std;
 
 //Funciones
 int sumar(int x,int y);			
 void sumar_sinretorno(int x, int y);
 
 //Principal
 int main(){
 	int a,b,suma;
 	cout<<"Ingrese dos numeros: ";
 	cin>>a>>b;
 	
 	suma=sumar(a,b);
 	cout<<"\nEl valor de suma es: "<<suma<<endl;
 	
	sumar_sinretorno(a,b);
 	
 }
 
 int sumar(int x,int y){							//La función devuelve el valor de suma, el
 	int suma=0;										//cual se puede usar en la función principal
	suma=x+y;										
 	return suma;
}
			
 void sumar_sinretorno(int x, int y){				//La única forma de hacer que se vea el
	int suma=0;										//valor es hacer un printf, ya que las variables  
 	suma=x+y;										//pierden su valor por ser locales
	cout<<"La suma sin retorno es: "<<suma;										
}
