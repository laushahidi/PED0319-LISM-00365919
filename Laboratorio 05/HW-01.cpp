// Precio, nombre, cantidad sin stack
#include <iostream>
#include <string>
using namespace std;

// Creando el registro de los nodos
struct node{
    string name;
    float price;
    int quantity;
    node* next;
};
typedef node* PD;

// Declarando prototipos
bool isEmpty(PD* products);
void push(PD* products, string name, float price, int quantity);
node top(PD* products);
node pop(PD* products);

int main(void){

    // Inicializando la pila
    PD products = NULL;

    // Declarando los datos
    string option;
    string name;
    float price;
    int quantity;

    // Mostrando el menu en un do while
    do{
        // Pidiendo datos
        cout << endl << "Nombre del producto: "; getline(cin, name);
        cout << "Precio del producto $: "; cin >> price; 
        cout << "Cantidad: "; cin >> quantity; cin.ignore();

        // Metiendo los datos ingresados
        push(&products, name, price, quantity);

        cout << "Ingresar mas datos (s / n): "; getline(cin, option);

    } while(option != "n");

    // Mostrando todos los nodos hasta que la pila este vacia
    while(!isEmpty(&products)){
        // Mostrando el ultimo nodo
        node auxP = top(&products);

        cout << endl << "Nombre del producto: " << auxP.name << endl;
        cout << "Precio $: " << auxP.price << endl;
        cout << "Cantidad: " << auxP.quantity << endl;

        // Quitando el ultimo nodo
        auxP = pop(&products);
    }    

    return 0;
}

// Funciones de stack con punteros

// Funcion para agregar datos
void push(PD* products, string name, float price, int quantity){

    node* newNode = new node;
    newNode->name = name;
    newNode->price = price;
    newNode->quantity = quantity;

    newNode->next = *products;
    *products = newNode;
}

// Funcion para mostrar el ultimo dato ingresado
node top(PD* products){

    node auxP;

    // Si la pila esta vacia
    if(!(*products)){
        auxP.name = "";
        auxP.price = 0;
        auxP.quantity = 0;
        auxP.next = NULL;
    }

    else{
        auxP.name = (*products)->name;        
        auxP.price = (*products)->price;
        auxP.quantity = (*products)->quantity;
        auxP.next = NULL;
    }
    return auxP;
}

// Funcion para quitar los datos del ultimo nodo
node pop(PD* products){

    node auxP;
    if(!(*products)){
        auxP.name = "";
        auxP.price = 0;
        auxP.quantity = 0;
        auxP.next = NULL;
    }

    else{
        auxP.name = (*products)->name;        
        auxP.price = (*products)->price;
        auxP.quantity = (*products)->quantity;
        auxP.next = NULL;

        (*products) = (*products)->next;
    }
    return auxP;
}

// Funcion para la pila vacia
bool isEmpty(PD* products){

    return (*products) == NULL;
}