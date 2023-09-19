//Estructuras: es una colección de uno o mas tipos de elementos denominados comapos, cada uno puede ser un tipo de dato diferente.//

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
    Persona personal = {"Wicho", 12, 1.20, "Blanco Albino", "Tactic", "pansexual"};

    cout << "Datos personales" << endl;
    cout << "Nombre:  " << personal.nombre << endl;
    cout << "Edad:  " << personal.edad << endl;
    cout << "Altura:  " << personal.altura << endl;
    cout << "Tez:  " << personal.tez << endl;
    cout << "Nacionalidad:  " << personal.nacionalidad << endl;
    cout << "Genero:  " << personal.genero << endl;

    getch();
    return 0;
}





