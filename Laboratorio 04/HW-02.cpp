#include <iostream>
using namespace std;

//Declarando propotipo de funcion
int fibo(int n);

int main() {
    cout << "'N' termino de la serie Fibonacci\n";
    int n = 0;

    // Ingresando la posicion del numero que se quiere ver
    cout << "Ingrese un numero: "; cin >> n;
    cout << "\nResultado: " << fibo(n) << endl;

}

//Funcion para determinar el numero de la serie fibonacci
int fibo(int n){
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    else if(n > 1){
        return fibo(n - 1) + fibo(n - 2);
    }
}