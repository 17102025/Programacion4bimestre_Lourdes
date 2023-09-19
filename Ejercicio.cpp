#include<iostream>
#include<conio.h>

using namespace std;

struct Persona {
    char nombre[20];
    int edad;
    double altura;
    char tez[20];
    char nacionalidad[20];
    char genero[20];
};

int main() {
    Persona persona[2]; 

    cout << "\nSolicitud de datos....\n";

    for (int i = 0; i < 2; i++) {
        cout << "Ingrese el nombre:   ";
        cin.getline(persona[i].nombre, sizeof(persona[i].nombre));

        cout << "Ingrese su edad:   ";
        cin >> persona[i].edad;
        cin.ignore(); // Clear the newline character

        cout << "Ingrese su altura:   ";
        cin >> persona[i].altura;
        cin.ignore(); // Clear the newline character

        cout << "Ingrese su tez:   ";
        cin.getline(persona[i].tez, sizeof(persona[i].tez));

        cout << "Ingrese su nacionalidad:   ";
        cin.getline(persona[i].nacionalidad, sizeof(persona[i].nacionalidad));

        cout << "Ingrese su genero:   ";
        cin.getline(persona[i].genero, sizeof(persona[i].genero));
    }

    cout << "\nDatos Personales\n";
    for (int j = 0; j < 2; j++) {
        cout << "\nNombre: " << persona[j].nombre;
        cout << "\nEdad: " << persona[j].edad;
        cout << "\nAltura: " << persona[j].altura;
        cout << "\nGenero: " << persona[j].genero;
        cout << "\nTez: " << persona[j].tez;
        cout << "\nNacionalidad: " << persona[j].nacionalidad;
    }

    getch();
    return 0;
}

