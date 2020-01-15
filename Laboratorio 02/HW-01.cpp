// Laura Ivonne Shahidinejad Martinez y Rodrigo Jose Flores Chevez
#include <iostream>
#include <string> //string types
using namespace std;

// Funcion de registro de clientes.
struct Customerdata{

    string name;

};

// Menu principal
int main(void){

    // Declaracion del arreglo para almacenar datos
    Customerdata *personArr;

    // Variable para almacenar numero de clientes
    int size;

    cout << "Ingrese la cantidad de clientes: "; cin >> size;    
    
    personArr = new Customerdata[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Ingrese el nombre completo del cliente:\t";
        getline(cin, personArr[i].name);
        cin.ignore();

    }
return 0;
}