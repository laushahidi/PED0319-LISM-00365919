#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

// Funcion que revisa que numeros aleatorios son multiplos de 7 y los acumula en una variable suma.
void sumaMultiplosSiete(int *array){
   
    int suma = 0;
   
    cout << endl << endl;
    for(int j = 0; j < 15; j++){
        if(array[j] % 7 == 0){
            suma+=array[j];
            //cout << array[j] << endl; // Mostrando los numeros aleatorios que son multiplos de 7.
        }
    }
   
    cout << "Suma de los numeros multiplos de 7: " << suma << endl;
}

// Funcion principal
int main()
{
    int array[15];
    srand(time(NULL)); // Numero aleatorio
   
    // Ciclo "for" para asignar los numeros aleatorios al arreglo.
    for(int i = 0; i < 15; i++){
        array[i] = 1 + (rand() % 76);
        //cout << array[i] << endl; // Mostrando los numeros aleatorios.
    }
   
    sumaMultiplosSiete(array);

    return 0;
}