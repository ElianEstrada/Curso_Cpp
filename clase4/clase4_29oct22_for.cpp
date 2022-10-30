#include <iostream>

using namespace std;

int main(){

    /*Ciclo For
    'for' '(' <inicialización>';' <condicion>';' <paso> ')' '{' <instrucciones> '}'

    <inicialización>: esta puede ser una asignacion o una declaración,
    practicamente lo que se crea es un contador.

    <condicion>: es la condición de salida.

    <paso>: este es como va a aumentar o disminuir (sea el caso) nuestra
    variable contadora (que es la que se crea en la inicialización).
    */

   /*Mostrar los números del 1 al 10*/

    for (int i = 1; i <= 1000; i++) {
        cout << i << endl;
    }

    return 0;
}