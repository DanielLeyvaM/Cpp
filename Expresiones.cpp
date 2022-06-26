//Bibilotecas
#include <iostream>
//Ejemplo sin using name space std

int main(){
	float a,b,c,d,resultado=0;
	std::cout<<"Digite un numero a: ";
	std::cin>>a;
	
	std::cout<<"Digite un numero b: ";
	std::cin>>b;
	
	std::cout<<"Digite un numero c: ";
	std::cin>>c;
	
	std::cout<<"Digite un numero d: ";
	std::cin>>d;
	
	resultado=(a+b)/(c+d);
	
	std::cout.precision(3);		//Redondea a 3 cifras (2.58) o (29.3)
	std::cout<<"\nEl resultado es: "<<resultado<<std::endl;
	return 0;
}


