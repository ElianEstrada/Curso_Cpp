#include <iostream>

using namespace std;

int main() {

    /*
    Continuando la practica, última actualización día 24 de Noviembre de 2022
    */

    int opcion;
    string usuarioD = "admin";
    string contraD = "admin";

    string usuario, contrasenia;

    do {
        cout << "\n==============MENU PRINCIPAL==============\n" << endl;
        cout << "1. Iniciar sesión\n2. Salir" << endl;
        cout << "\nIngrese una opción: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            do {
                cout << "\n==============INICIAR SESION==============\n" << endl;
                cout << "Ingrese su usuario: ";
                cin >> usuario;
                cout << "Ingrese su contrasenia: ";
                cin >> contrasenia;

                if (usuario == usuarioD && contrasenia == contraD){
                    //accion si ambos son verdaderos
                    cout << "\nBienvenido :)" << endl;
                } else if (usuario == usuarioD){
                    //acciones si la contrasenia es incorrecta
                    cout << "\nContrasenia incorrecta :(" << endl;
                } else if (contrasenia == contraD) {
                    //acciones si el usuario es incorrecto
                    cout << "\nUsuario incorrecto :(" << endl;
                } else {
                    //acciones si el usuario y la contrasenia son incorrectos
                    cout << "\nEl usuario y la contrasenia son incorrectos :(" << endl;
                }
            }while(usuario != usuarioD || contrasenia != contraD);

            break;
        case 2: 
            cout << "\nGracias por usar mi servicio" << endl;
            break;
            //exit(0);
        default:
            cout << "\nLa opción que ingreso no es valida, por favor ingrese una opción entre [1-2]" << endl;
            break;
        }
    } while (opcion != 2);

    return 0;
}