// Laura Ivonne Shahidinejad Martinez y Rodrigo Jose Flores Chevez
#include <iostream> 
#include <string> //string types
using namespace std;

// Funcion de registro de la persona.
struct Persondata{
    int age, years_worked, sex_gender;
    float salary;
    string name;

};

void is_jubiled(Persondata show_jub);

// Menu principal
int main(void){

    Persondata p1;
    cout << "Ingrese nombre: "; cin >> p1.name;
    cout << "Ingrese edad: "; cin >> p1.age;
    cout << "Ingrese años trabajados: "; cin >> p1.years_worked;
    cout << "Ingrese su salario: "; cin >> p1.salary; 
    cout << "Ingrese '1' hombre o '2' mujer: "; cin >> p1.sex_gender;

    is_jubiled(p1);

    return 0;
}

// Funcion de condiciones para calcular la jubilacion o no.
void is_jubiled(Persondata show_jub){

    if (show_jub.sex_gender == 1){
    if (show_jub.age >= 60 && show_jub.years_worked >= 25){
        cout << show_jub.name << " cumple los requisitos para jubilacion." << endl;

    }
    else{
        cout << "Aun no cumple los requisitos para jubilacion: 25 años laborados y tener 60 años de edad." << endl;
    }
    
    }
    else if(show_jub.sex_gender == 2){
        if (show_jub.age >= 55 && show_jub.years_worked >= 25){
            cout << show_jub.name << " cumple los requisitos para jubilacion." << endl;
        }
        else{
            cout << "Aun no cumple los requisitos para jubilacion: 25 años laborados y tener 55 años de edad" << endl;
        }
    }
}