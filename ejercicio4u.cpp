#include<iostream>

int main() {
    const int size = 5;
    int arreglo1[size];  
    int arreglo2[size]; 
    
    std::cout << "Ingrese " << size << " numeros:\n";
    
    for (int i = 0; i < size; i++) {
        std::cin >> arreglo1[i]; 
        arreglo2[i] = arreglo1[i] * 2;
    }
    
    std::cout << "El segundo arreglo, multiplicado por 2, es:\n";
    for (int i = 0; i < size; i++) {
        std::cout << arreglo2[i] << " ";
    }
    
    return 0;
}
