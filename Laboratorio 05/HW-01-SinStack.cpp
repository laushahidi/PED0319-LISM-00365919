// Precio, nombre, cantidad sin stack
#include <iostream>
#include <string>
using namespace std;

struct node{
    string name;
    float price;
    int quantity;
    node* next;
};
typedef node* PD;

bool isEmpty(PD* products);
void push(PD* products, string name, float price, int quantity);
node top(PD* products);
node pop(PD* products);

int main(void){
    PD products = NULL;

    string option;
    string name;
    float price;
    int quantity;

    do{
        
        cout << endl << "Nombre del producto: "; getline(cin, name);
        cout << "Precio del producto $: "; cin >> price; 
        cout << "Cantidad: "; cin >> quantity; cin.ignore();

        push(&products, name, price, quantity);

        cout << "Ingresar mas datos (s / n): "; getline(cin, option);

    } while(option != "n");

    node auxP = top(&products);

    cout << endl << "Nombre del producto: " << auxP.name << endl;
    cout << "Precio $: " << auxP.price << endl;
    cout << "Cantidad: " << auxP.quantity << endl;

    auxP = pop(&products);

    return 0;
}

void push(PD* products, string name, float price, int quantity){

    node* newNode = new node;
    newNode->name = name;
    newNode->price = price;
    newNode->quantity = quantity;

    newNode->next = *products;
    *products = newNode;
}

node top(PD* products){

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
    }
    return auxP;
}

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

bool isEmpty(PD* products){

    return (*products) == NULL;
}