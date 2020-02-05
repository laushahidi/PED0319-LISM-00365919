#include <iostream>
#include <string>
using namespace std;

struct data{
    string name, lastname;
    double dui;
};

struct node{
    struct data person;
    node *left, *right;
};
// nombre, dui, apellido y alfabeticamente por apellido viernes media noche
node* createLeaf(struct data person);
void insertInTree(node** pTree, struct data person);
void preOrder(node* pTree);
void postOrder(node* pTree);
void inOrder(node* pTree);

int main(void){
    node *pTree = NULL;
    struct data personData;
    int continuar = 0;
    do{
        cout << "Menu principal" << endl;
        cout << "1. Ingresar datos" << endl;
        cout << "2. Salir" << endl;
        cin >> continuar; cin.ignore();
        switch(continuar){
            case 1:
                cout << "Ingresar datos" << endl;
                cout << "Nombre: "; getline(cin, personData.name);
                cout << "Apellido: "; getline(cin, personData.lastname);
                cout << "DUI: "; cin >> personData.dui; cin.ignore();
                insertInTree(&pTree, personData);
            break;
            case 2:
                cout << "Salida exitosa" << endl;
            break;
            default:
                cout << "Opcion invalida!" << endl;
            break;
        }       

    }while(continuar != 2);

    cout << "Imprimiendo en preOrder" << endl;
    preOrder(pTree); cout << endl << endl;

    cout << "Imprimiendo en inOrder" << endl;
    inOrder(pTree); cout << endl << endl;

    cout << "Imprimiendo en postOrder" << endl;
    postOrder(pTree); cout << endl << endl;


    return 0;
}

node* createLeaf(struct data person){
    node* leaf = new node;
    leaf->person = person;
    leaf->left = NULL;
    leaf->right = NULL;

    return leaf;
}

void insertInTree(node** pTree, struct data person){
    if(!*pTree)
        *pTree = createLeaf(person);
    else{
        if(person.lastname.compare((*(*pTree)).person.lastname) <= 0)
            insertInTree(&(*(*pTree)).left, person);
        else
            insertInTree(&(*(*pTree)).right, person);
    }
}

void preOrder(node* pTree){
    if(!pTree)
        return;
    else{
        cout << pTree->person.lastname << "\t";
        preOrder(pTree->left);
        preOrder(pTree->right);
    }
}

void postOrder(node* pTree){
    if(!pTree)
        return;
    else{
        postOrder(pTree->left);
        postOrder(pTree->right);
        cout << pTree->person.lastname << "\t";
    }
}

void inOrder(node* pTree){
    if(!pTree)
        return;
    else{
        inOrder(pTree->left);
        cout << pTree->person.lastname << "\t";
        inOrder(pTree->right);
    }
}