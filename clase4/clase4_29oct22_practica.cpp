#include <iostream>

using namespace std;

int main() {

    int opcion;
    bool menu_principal = true;

    while (menu_principal){
        cout << "1. Iniciar sesión\n2. Salir" << endl;
        cout << "\nIngrese una opción: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "\nEscogio la opción de Iniciar sesion" << endl;
            break;
        case 2: 
            cout << "\nGracias por usar mi servicio" << endl;
            menu_principal = false;
            exit(0);
        default:
            cout << "\nLa opción que ingreso no es valida, por favor ingrese una opción entre [1-2]" << endl;
            break;
        }
    }

    return 0;
}