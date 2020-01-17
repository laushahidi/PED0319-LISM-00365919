#include <iostream>
using namespace std;

// Funcion para determinar tipo de frase
int functionResult(string phrase){
    
    // Declaracion de variables locales
    int len, num = 0, alf = 0, espace = 0, others = 0, result = 0;
    string c;
    
    // Almacenando el tamano de la frase en otra variable
    len = phrase.length();
    
    // Iniciando un for para examinar cada caracter de la frase
    for(int i = 0; i < phrase.length(); i++){
        
        c = phrase.substr(i, 1);
        
        if(c >= "0" and c <= "9"){ // Determinar si hay numeros
            num += 1;
        }
        else if(((c >= "a") and (c <= "z")) or ((c >= "A") and (c <= "Z"))){ // Determinar si hay letras
            alf += 1;
        }
        else if(c == " "){ // Determinar si hay espacios
            espace += 1;
        }
        else{ // Determinar si hay otro tipo de caracter
            others += 1;
        }
    }
    
    // Sumando los espacios con cada tipo de variable para determinar el resultado
    if(num + espace == len){
        result = 1;
    }
    else if(alf + espace == len){
        result = -1;
    }
    else{
        result = 0;
    }
    
    // Couts para ver si fue correcto el contador
    //cout << "Longitud: " << len << endl << "Numeros : " << num << endl << "Letras: " << alf << endl;
    //cout << "Espacios: " << espace << endl << "Otros: " << others << endl;
    return result;
}

// Menu principal
int main(){
    
    // Declaracion de variable para la frase
    string phrase;
    
    cout << "Ingrese una frase: ";
    getline(cin, phrase);
    
    // Mostrando el resultado de la funcion
    cout << endl << functionResult(phrase) << endl;

    return 0;
}