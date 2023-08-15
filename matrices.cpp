#include <iostream>
#include<conio.h>
using namespace std;

int main() {
    int fila, columna;
    
    cout << "Ingrese la cantidad de filas: ";
    cin >> fila;
    cout << "Ingrese la cantidad de columnas: ";
    cin >> columna;
    
    int matriz[fila][columna]; // Cambio 'main' por 'matriz'
    
    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {
            cout << "Ingrese el dato de la posición " << i + 1 << "," << j + 1 << ": ";
            cin >> matriz[i][j]; // Cambio 'main' por 'matriz'
        }
    }
    
    cout << "\nImprimiendo matriz\n";
    for (int k = 0; k < fila; k++) {
        for (int l = 0; l < columna; l++) { // Agregando el tipo de dato 'int'
            cout << matriz[k][l] << " "; // Agregando espacio para separar los elementos
        }
        cout << endl;
    }
    
    return 0; // Agregando la declaración de retorno
}



