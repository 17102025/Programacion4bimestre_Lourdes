#include <iostream>
#include<conio.h>
using namespace std;

int main() {
    int fila=3, columna=3;
    
    
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
        cout <<endl;
    }
    cout<<"\n";
    for (int k=0;k<columna;k++){
    	cout<<k+1<<","<<k+1<<": "<<matriz[k][k]<<endl;
	}
    
    return 0; // Agregando la declaración de retorno
}



