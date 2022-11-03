#include <iostream>

using namespace std;

int main() {

    /*
    Solicitar al usuario un número, este número será 
    la tabla de multiplicar que desa ver, a su vez deberá solicitarle
    hasta que número desea ver la tabla y finalmente mostrarlo.
    */

   /*
    Entradas: 1 número (tabla) y 1 número (el limite de la tabla)
   */

    int tabla, limiteTabla;
    char respuesta;
    /*
    int tabla;
    int limiteTabla;
    */

    do {
        cout << "Por favor ingrese el número de tabla a mostrar: ";
        cin >> tabla;

        cout << "Por favor ingrese el límite de la tabla del " << tabla << ": ";
        cin >> limiteTabla;

        /*
        Salida: 
        1 X num_tabla = (1 * num_tabla)
        2 X num_tabla = (2 * num_tabla)    
        3 X num_tabla = (3 * num_tabla)
        .
        .
        .
        limite X num_tabla = (limite * num_tabla)
        */

        for (int i = 1; i <= limiteTabla; i++){
            cout << i << " X " << tabla << " = " << (i * tabla) << endl;
        }

        cout << "\nDesea visualizar otra tabla? [S/N]: ";
        cin >> respuesta;

    } while(respuesta == 'S');


    return 0;
}