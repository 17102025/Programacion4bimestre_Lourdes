#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombres[5];
    string nombre_a_buscar;
    bool encontrado = false;
    int posicion = -1; 

    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el nombre " << i + 1 << ": ";
        cin >> nombres[i];
    }

    cout << "Ingrese un nombre a buscar: ";
    cin >> nombre_a_buscar;

    for (int i = 0; i < 5; i++) {
        if (nombres[i] == nombre_a_buscar) {
            encontrado = true;
            posicion = i; 
            break;        
        }
    }

    if (encontrado) {
        cout << "El nombre " << nombre_a_buscar << " ha sido encontrado en la posicion " << posicion << "." << endl;
    } else {
        cout << "El nombre " << nombre_a_buscar << " no se encuentra en la lista." << endl;
    }

    return 0;
}

