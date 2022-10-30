#include <iostream>

using namespace std;

int main() {

    /*Ciclos
    Una estructura de control que me permite a mi, dada una condición
    repetir un bloque de código.

    Existen 3 formas de hacer un ciclo.

    1. While
    2. For
    3. do-while

    Ciclo While
    'while' '(' <condicion> ')' '{' <instrucciones> '}'
    */

    /*Imprimir los números del 1 al 10*/

    int contador = 1;

    while (contador <= 10) {

        cout << contador << endl;

        contador++;
    }

    cout << contador << endl;

    return 0;
}