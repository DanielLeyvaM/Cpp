/*
    Documentation: ARRAYS IMPLEMENTATION
*/

#include <iostream>
//using namespace std;

int main(int argc, char** argv){
    //-----------ARREGLOS NUMERICOS-----------
    int n[4]={1,2,3,4};         //En array numericos no existe el '\0' (sin espacio extra)
    const int n2[]={1,0,1}; 	//Arreglo no modificable

    int tam=sizeof(n)/sizeof(n[0]);
    for(int i=0;i<tam;i++){
        std::cout<<n[i]<<" ";
    }

    std::cout<<std::endl;

    //-----------AREGLOS CARACTERES (STRINGS)---------------
    char arr1[4]={'H','o','l','a'};	//Cadena mal inicializada necesita espacio extra '\0'
	char arr2[]={'H','o','l','a'};	//Cadena mal inicializada el compilador toma el tamaño de los caracteres (4)

	//Inicializado correctamente cstrings
	char arr3[]={'H','o','l','a','\0'};
	char arr4[5]={'H','o','l','a'};   //Se autocompleta con \0

	//Declarar arreglos de caracteres
	char arr5[]="Hola buen dia"; //Se autocompleta con \0

	//Imprimir arreglo directamente (solo de caracteres o strings)
	std::cout<<"Arreglo mal inicializado: "<<arr1<<std::endl;	    //Sin \0 al final
    std::cout<<"Arreglo bien inicializado: "<<arr3<<std::endl;	    //Con \0 al final

	//Usando for (Cualquier arreglo caracteres o numerico)
    std::cout<<"----- Arreglo numerico -----"<<std::endl;
	for(auto num: n){   //Se puede usar int o auto
		std::cout<<num;
	} 
    std::cout<<std::endl;

    std::cout<<"----- Arreglo caracteres -----"<<std::endl;
    for(auto c: arr5){
		std::cout<<c;
	}
    std::cout<<std::endl;

    //String data type
    std::cout<<"----- String data type use -----"<<std::endl;

    std::string message="Hola buenas tardes";   //String implemetation
    std::string short_message{"Hola mundo",0,4};  //4 caracteres empezando de index 0 (Hola)
    std::cout<<message<<std::endl;
    std::cout<<short_message<<std::endl;
    
    message="El size de mensaje cambio en run time"; 
    std::cout<<message<<std::endl;

    return 0;
}
