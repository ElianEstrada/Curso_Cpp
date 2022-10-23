#include <iostream>

using namespace std;

int main(){

    //Declarando variable para las opciones
    int opcion; //0

    // Mostrando el Menu pricipal
    cout << "1. Inicio de Sesion" << endl;
    cout << "2. Salir" << endl;

    //cout << "1. Inicio de Sesion\n2. Salir" << endl;

    //Obteniendo la opción del usuario
    cout << "Por favor ingrese una opcion [1-2]: ";
    cin >> opcion;

    //Estructuras de control

    // if - else
    // switch - case

    /* Estructura If
        'if' '(' <expresion_relacionales> ')' '{' <instrucciones_verdaderas> '}'
        'else' 'if' '(' <expresion_relacional> ')' '{' <instrucciones_verdaderas> '}'
        'else' '{' <instrucciones_falsas> '}'

        expresion_relacionales
        5 > 3 -> expresion_relacionl -> verdadero
        5 < 3 -> falso
        5 != 2 -> verdadero
        2 == 1 -> false
    */

    /*if (opcion == 1){
        //Este bloque es para el inicio de sesión
        cout << "Usted escogio la opción de Inicio de sesion" << endl;

    } else if (opcion == 2) {
        //Este bloque es para salir del programa
        cout << "Gracias por utilizar nuestro servicio :)" << endl;
        exit(0);
    } else {
        //Este bloque es para cualquier cosa que no sea 1 y 2
        cout << "Ingreso una opción incorrecta." << endl;
    }*/

    /*Switch - case
    'switch' '(' <variable_evaluar> ')' '{'
        'case' <expresion>':'
            <instrucciones>
            'break' ';'
        'default' ':'
            <instrucciones>
            'break' ';'
    '}'
    */

    switch(opcion) {
        //Evaluar las diferentes opciones (o casos) posibles
        case 1:
            //este caso será para iniciar sesión
            cout << "Usted escogio la opción de Inicio de sesion" << endl;
            break;
        case 2:
            //este caso será para salir del programa
            cout << "Gracias por utilizar nuestros servicios :)" << endl;
            exit(0);
            break;
        default:
            //Todo lo que no es ni inicio de sesion ni salir del programa
            cout << "Ingreso una opción incorrecta" << endl;
            break;
    }

    return 0;
}