#include <iostream>
#include <math.h> // Libreria para la raiz cuadrada.
using namespace std;

// Funcion de registro
struct polinomio{
    double a;
    double b;
    double c;
    int n;
    double x1;
    double x2;
};

typedef struct polinomio poli;

// Menu principal
int main()
{
    poli data;
    float d;
    
    // Pidiendo los datos principales
    cout << "Ingrese el valor de a: ";
    cin >> data.a;
    cout << "Ingrese el valor de b: ";
    cin >> data.b;
    cout << "Ingrese el valor de c: ";
    cin >> data.c;
    
    // Calculando delta.
    d = data.b*data.b - 4*data.a*data.c;
    
    // Decision por delta
    if(d < 0){
        data.n = 0;
        cout << "\nNo tiene raices reales";
    }
    
    else if(d == 0){
        data.n = 1;
        data.x1 = -data.b / (2*data.a);
        cout << "\nTiene una raiz, el resultado es: " << data.x1;
    }
    
    else{
        data.n = 2;
        data.x1 = (-data.b + sqrt(d)) / (2*data.a);
        data.x2 = (-data.b - sqrt(d)) / (2*data.a);
        cout << "\nTiene dos raices, los resultados son: " << data.x1 << " y " << data.x2;
    }

    return 0;
}