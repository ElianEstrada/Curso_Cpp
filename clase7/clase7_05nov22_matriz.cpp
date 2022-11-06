#include <iostream>

using namespace std;

int main(){

    /* Arreglos de multidimensionales o matrices 
    
    <tipo> <nombre> '[' <tamaño1> ']' '[' <tamaño2> ']' -> bidimensional
    <tipo> <nombre> '[' <tamaño1> ']' '[' <tamaño2> ']' '[' <tamaño3> ']' -> tridimensional00

    tamaño1 -> representa las filas
    tamaño2 -> representa las columnas
    tamaño3 -> representa la profundidad

    */


    /*Ejemplo 
    
    Arreglo bidimensional
    */

    //declaracion con asignación
    /*
    <tipo> <nombre> <dimensiones> '=' '{' <elementos separdos por coma> '}'
    */

    int edades[3] = { 20, 21, 14 };

    /*for (int i = 0; i < 3; i++){
        cout << edades[i] << endl;
    }*/

    int numeros[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } }; // != int numeros[3];

    /*
        [ [0, 0], [0, 1], [0, 2] ],
        [ [1, 0], [1, 1], [1, 2] ]
    */

    /*
        1 2 3
        4 5 6
    */

    for (int i = 0; i < 2; i++){             // 1ra iteracion i = 0, j = 0; 
        for (int j = 0; j < 3; j++) {        // 2da iteracion i = 0, j = 1;
            cout << numeros[i][j] << " ";    // numeros[0][0] -> 1; numeros[0][1] -> 2
        }
        cout << endl;
    }

    return 0;
}