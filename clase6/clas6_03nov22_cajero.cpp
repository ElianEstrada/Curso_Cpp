#include <iostream>
#include <cctype>

using namespace std;

int main(){

    /*Cajero Automático
        1. Solicitar saldo
        2. Depositar
        3. Retirar
        4. Salir
    */

    /*
    tolower() -> convierte todo caracter en minuscula
    toupper() -> convierte todo caracter en mayuscula

    acá para poder utilizarlas necesitamos
    incluir la libreria 'cctype'

    */

    float saldoInicial = 10000;
    float cantidad;
    char respuesta;
    int opcion;

    do {
        cout << "\n===========Cajero Automatico===========\n" << endl;
        cout << "1.Soliciatar saldo\n2.Depostiar\n3.Retirar\n4.Salir" << endl;
        cout << "Ingrese una opcion [1-4]: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            //Solicitar Saldo
            cout << "\nEl saldo actual en la cuenta es: " << saldoInicial << endl;
            cout << "\nDesea realizar otra transaccion [S/N]: ";
            cin >> respuesta;
            break;
        case 2:
            //Depositar
            cout << "\nIngrese la cantidad que desea depositar: ";
            cin >> cantidad;

            saldoInicial += cantidad;

            cout << "\nDesea realizar otra transaccion [S/N]: ";
            cin >> respuesta;
            break;
        case 3: 
            //Retirar
            cout << "\nIngrese la cantidad que desea retirar: ";
            cin >> cantidad;

            if (cantidad > saldoInicial) {
                cout << "\nNo cuenta con el saldo suficiente para realizar este retiro" << endl;
            } else {
                saldoInicial -= cantidad;
            }

            cout << "\nDesea realizar otra transaccion [S/N]: ";
            cin >> respuesta;
            break;
        case 4:
            //Salir
            exit(0);
            break;
        default:
            //Comete un error
            cout << "\nLa opcion que escogio es incorrecta, por favor ingrese una opcion correcta." << endl;
            respuesta = 'S';
            break;
        }
    } while (toupper(respuesta) == 'S');

    cout << "\nLa cuenta quedo con saldo de: " << saldoInicial << endl;

    return 0;   
}