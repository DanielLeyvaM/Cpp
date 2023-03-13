/*
    Documentation: POINTERS IMPLEMENTATION WITH DINAMIC MEMORY
    1. USE DELETE ALWAYS TO FREE MEMORY AT THE END
    2. RESET THE POINTER IF ITS GOING TO BE USED AGAIN 

*/

#include <iostream>
//using namespace std;

int main(int argc, char** argv){
    //------------------ Integer pointers -------------------------       
    int *p1=new int{20};    //Dinamic memory allocation

    if(p1){         //if(p1) == if(p1!=nullptr)
        std::cout<<"Valor: "<<*p1<<std::endl;
    }
    else{
        std::cout<<"Invalid Adress"<<std::endl;
    }

    delete p1;          //Release memory
    p1=nullptr;         //Reset the pointer


    //-------------------- Array Pointers ----------------------------
    const size_t TAM=5;
    int *array=new int[TAM]{};      //Initialized to 0

    if(array){
        for(size_t i=0;i<TAM;i++){
            std::cout<<"Value: "<<array[i]<<" Position: "<<i<<std::endl;
        }
    }

    delete[] array;
    array=nullptr;


    //-------------------------- LEAKS --------------------------------
    /*
    //First case (Lost access to some memory)
    int *p2=new int{10};
    int number=1;
    //Should delete and reset before assignment 
    p2=&number;


    //Second case (Double assignment)
    int *p3=new int{10};
    p3=new int{20};
    */

    return 0;
}
