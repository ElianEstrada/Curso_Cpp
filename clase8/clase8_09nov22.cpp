#include <iostream>

using namespace std;

int main() {
                    //  0   1   2   3   4   5    6  7   8    9
    int numeros[10] = { 23, 53, 12, 19, 93, 45, 26, 38, 42, 67 };
    int mayor = 0;
    int menor = 100;
    
    for (int i = 0; i < 10; i++) {   // 6ta iteracion -> i = 5; mayor = 93;

        if (mayor < numeros[i]){ // 53 < 93
            mayor = numeros[i];  // mayor = 93;
        }
    }



    for (int i = 0; i < 10; i++){   // 3ra iteracion -> i = 2; menor = 0;
        if (menor > numeros[i]){    // 0 > 12
            menor = numeros[i];
        }
    }


    //Buscar el número 54 en mi arreglo de numeros

    for (int i = 0; i < 10; i++) {
        if (numeros[i] == 45){
            cout << "Encontre el número 45 en la posición: " << i << endl;
            break; //palabra reservada
        }
    }

    /*
    Break es una sentencia de transferencia
    Solo funciona en ciclos y en el Switch 
    y lo que hace es practicamente como su nombre indica "romper" el flujo.
    */

    cout << "El número mayor de numeros es: " << mayor << endl;
    cout << "El número menor de numeros es: " << menor << endl;

    return 0;
}