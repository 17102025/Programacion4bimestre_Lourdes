#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char palabra[20];
    int longitud;

    cout << "Ingrese la cadena: ";
    cin.getline(palabra, sizeof(palabra));  // Usar cin.getline() para leer la línea completa

    cout << "\n" << palabra;

    longitud = strlen(palabra);

    cout << "\nLa cantidad de caracteres que posee la palabra: " << longitud;

    if (longitud > 10) {
        cout << "\n" << palabra;
    } else if (longitud <= 10) {  // Corregir el condicional y eliminar el carácter adicional
        cout << "\nLa cadena no supera los 10 caracteres.";
    }

    return 0;
}

