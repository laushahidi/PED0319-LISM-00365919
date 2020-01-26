// Precio, nombre, cantidad en stock
#include <iostream>
#include <string> // Libreria para utilizar strings
#include <stack> // Utilizar funciones de pila
using namespace std;

// Declaranco el registro de los productos
struct productData{
    float price;
    string name;
    int quantity;
};

// Utilizando typedef para usar "PD"
typedef struct productData PD;

int main(void){
    string option;

    // Declarando la pila con el tipo de variable de registro PD
    stack <PD> products;

    // Variable auxiliar para almacenar los tres datos
    PD auxP;

    // Menu "do while" para pedir datos mientras el usuario lo desee
    do{
        cout << endl << "Nombre del producto: "; getline(cin, auxP.name);
        cout << "Precio del producto $: "; cin >> auxP.price; cin.ignore();
        cout << "Cantidad: "; cin >> auxP.quantity; cin.ignore();

        // Funcion para agregar los datos ingresados a la pila
        products.push(auxP);

        cout << endl << "¿Desea ingresar los datos de otro producto? (s / n): "; getline(cin, option);

    } while(option != "n");

    // Funcion para mostrar el ultimo dato ingresado en la pila
    auxP = products.top();

    cout << endl << "Nombre del producto: " << auxP.name << endl;
    cout << "Precio $: " << auxP.price << endl;
    cout << "Cantidad: " << auxP.quantity << endl;

    return 0;
}