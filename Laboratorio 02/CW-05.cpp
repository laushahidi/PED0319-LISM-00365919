#include <iostream>
#include <string>
using namespace std;

struct Enterprise
{
    string name;
    int employees;
};

int main(void)
{
    Enterprise *array;
    int size;

    cout << "Digite cantidad de empresas: ";
    cin >> size;
    array = new Enterprise[size]; //espacio de memoria reservado igual al puntero declarado.

    for (int i = 0; i < size; i++)
    {
        cout << "Nombre:\t";
        cin >> array[i].name;
        cout << "Empleados:\t";
        cin >> (array + i)->employees;
        cin.ignore();
    }

    return 0;
}