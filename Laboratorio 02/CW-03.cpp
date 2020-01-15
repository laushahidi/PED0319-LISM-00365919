#include <iostream>

using namespace std;

void printLetters(char* printarray, int size);

int main(void){
    int size = 0;

    cout << "Digite la cantidad de letras: "; cin >> size;
    char* array;
    array = new char [size];

    for (int i = 0; i < size; i++){
        cout << "Digite letra: "; cin >> *(array + 1);
    }
    printLetters(array, size);
    return 0;
}

void printLetters(char* printarray, int size){
    for(int i = 0; i < size; i++){
        cout << "Letra: " << printarray[i] << endl;
    }
}