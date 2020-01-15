// Laura Ivonne Shahidinejad Martinez y Rodrigo Jose Flores Chevez
#include <iostream>
using namespace std;

// Funcion para registrar los datos de los vendedores.
struct datosSales{
    double dui;
    string name;
    int year;
    float monthlypayment;
};

// Dandole el nombre de "sales" a la funcion anterior.
typedef struct datosSales sales;

// Funcion para pedir los datos de los vendedores.
void information(sales *p, int number){

    for(int i = 0; i < number; i++){
        cout << "\nDUI: ";
        cin >> p[i].dui;
        cin.ignore();
        cout << "Nombre completo: ";
        getline(cin, p[i].name);
        cout << "Año en que fue contratado: ";
        cin >> p[i].year;
        cout << "Salario mensual: ";
        cin >> p[i].monthlypayment;
        cin.ignore();
        
    }
}

// Funcion para calcular el salario devengado, se resta el año actual menos el año de contrato, se multiplica por 12 y eso por el salario.
void formula(sales *p, int number){
    
    float devengado, yearsworked, monthsworked;
    
    for(int i = 0; i < number; i++ ){
        yearsworked = 2020 - p[i].year;
        monthsworked = yearsworked * 12;
        devengado = monthsworked * p[i].monthlypayment;
        
        cout << "\nEl salario devengado del vendedor " << i+1 << " es $" << devengado;
    }
}

// Menu principal.
int main()
{
    // Variable para preguntar cuantos vendedores se van a registrar.
    int number;
    
    cout << "Escribir cuantos vendedores se van a ingresar: ";
    cin >> number;
    sales employees[number];
    information(employees, number);
    formula(employees, number);

    return 0;
}