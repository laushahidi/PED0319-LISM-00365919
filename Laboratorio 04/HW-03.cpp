#include <iostream>
using namespace std;

// Registro de electrodomesticos
struct products{
    string name;
    float price, sellingprice;
};

// Declarando prototipos de funciones recursivas
void fillproducts(products* array, int size, int aux);
float sumatoria(products* array, int size, int bandera, int aux);

int main(void){

    // Declaracion de variables
    int size = 0, bandera, option;
    products* array;
    cout << "Ingrese cuantos productos va a ingresar: "; cin >> size;
    cin.ignore();

    // Creacion del arreglo para almacenar el registro
    array = new products[size];

    // Funcion para llenar los datos del registro
    fillproducts(array, size, 0);

    // Preguntando que opcion desea ver
    cout << "\nDesea ver suma del costo (1) o suma del precio de venta (2) \nIngrese (1/2): "; cin >> option;
    while((option != 1) and (option != 2)){
        cout << "\nLa opcion no es valida, ingrese (1) o (2): "; cin >> option;
    }

    // Asignacion de variable bandera para determinar que condicion tomar en la funcion recursiva de sumatoria
    if(option == 1){
        bandera = 0;
        cout << "\nSuma del costo: $";
    }
    else if(option == 2){
        bandera = 1;
        cout << "\nSuma de precio de venta: $";
    }

    // Funcion recursiva para sumar costo o precio de venta
    cout << sumatoria(array, size, bandera, 0) << endl;

    return 0;
}

// Funcion recursiva para llenar los datos
void fillproducts(products* array, int size, int aux){
    if(size == aux)
        return;
    else{
        
        cout << "\nNombre: "; getline(cin, array[aux].name);
        cout << "Costo: $"; cin >> array[aux].price;
        cout << "Precio de venta: $"; cin >> array[aux].sellingprice;
        cin.ignore();

        fillproducts(array, size, aux + 1);
    }
}

// Funcion recursiva para sumar
float sumatoria(products* array, int size, int bandera, int aux){

    if(size == aux){
        return 0;
    }
    else if(bandera == 0){ 
        return array[aux].price + sumatoria(array, size, bandera, aux + 1);
    }
    else if(bandera == 1){ // suma de precio de venta
        return array[aux].sellingprice + sumatoria(array, size, bandera, aux + 1);
    }
}