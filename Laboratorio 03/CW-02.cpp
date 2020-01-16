#include <iostream>
#include <string>
using namespace std;

struct Address{
    int houseNumber;
    string city, state;

};

struct personalInfo{
    string name;
    int age;
    Address pAddress;
};

void printInfo(personalInfo* pI, int size, int pos);

int main (void){
    personalInfo* pData;
    int size = 0;

    cout << "Cantidad de datos a ingresar: "; cin >> size;
    pData = new personalInfo[size];

    for(int i = 0; i < size; i++){
        cout << "Nombre: "; cin >> pData[i].name;
        cout << "Edad: "; cin >> (pData + i)->age;
        cin.ignore();
        cout << "No. casa: "; cin >> pData[i].pAddress.houseNumber;
        cin.ignore();
        cout << "Ciudad: "; cin >> (pData + i)->pAddress.city;
        cout << "Estado: "; cin >> (pData + i)->pAddress.state;

    }

    printInfo(pData, size, 0);

    return 0;
}

void printInfo(personalInfo* pI, int size, int pos){
    if(pos == size){
        return;
    }

    else{
        printInfo(pI, size, pos +1);
        
        cout << "\nNombre:\t" << pI[pos].name << endl;
        cout << "Edad:\t" << pI[pos].age << endl;
        cout << "No. de acasa:\t" << pI[pos].pAddress.houseNumber << endl;
        cout << "Ciudad:\t" << pI[pos].pAddress.city << endl;
        cout << "Estado:\t" << pI[pos].pAddress.state << endl;

        
    }
}