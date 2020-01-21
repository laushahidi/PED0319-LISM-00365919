#include <iostream>
using namespace std;

// Declarando el prototipo de funcion
int inverse(int num);

int main(void){

    int number;
    // Pidiendo el numero natural a invertir
    cout << "Ingrese un numero: "; cin >> number;
    cout << inverse(number)<< endl;

    return 0;
}

// Funcion recursiva para invertir el numero
int inverse(int num){

    //Si el numero es menor a 10 solo retornará el numero
    if(num < 10)
        return num;
    // Sino, se obtiene el mod de 10 y se va mostrando, para mostrar el primer digito por ultimo se divide el numero entre 10 y se almacena en una variable
    else{
        float div = num % 10;
        float result = num / 10;
        cout << div << " ";
        return inverse(result);
    }
}

