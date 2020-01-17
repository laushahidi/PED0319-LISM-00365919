#include <iostream>
using namespace std;

//Funcion para determinar los numeros primos entre 1 a 100.
bool numPrimo(int number){

    //Ciclo for que determina si el numero es divisible entre los numeros del 2 a number - 1, si es divisible entre alguno, el numero no es primo.
    for(int i = 2; i < number; i++){
        if(number % i == 0){
            return false;
        }
    }
    
    return true;
}

//Funcion que suma los numeros primos del 1 al 100.
int suma(){

    //Declaracion de variable.
    int total = 0;

    for(int i = 1; i <= 100; i++){
        if(numPrimo(i)){
            //cout << i << endl;
            total+=i;
        }
    }
    return total;
}

// Menu principal
int main(){
    
    // Mostrando el resultado.
    cout << "La suma de los numeros primos del 1 al 100 es: " << suma() << endl;
    
    return 0;
}