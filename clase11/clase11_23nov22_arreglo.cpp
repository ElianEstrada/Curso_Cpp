#include <iostream>

using namespace std;

void mostrarArreglo(int numeros[]) {
    for (int i = 0; i < 10; i++){
        cout << numeros[i] << " ";
    }
}

void cambiarValor(int indice, int valor, int numeros[]) {
    numeros[indice] = valor;
}

int main() {

    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int indice, valor;
    char respuesta;

    mostrarArreglo(numeros);

    do {
        cout << "\nQue indice desea remplazar: [0-9]";
        cin >> indice;

        cout << "Que valor desea colocar: ";
        cin >> valor;

        cambiarValor(indice, valor, numeros);
        mostrarArreglo(numeros);

        cout << "\nSi desea modificar otro indice?: [S/N]: ";
        cin >> respuesta;

    } while(respuesta == 'S');

    mostrarArreglo(numeros);

    return 0;
}