#include <iostream>

using namespace std;

string administradores[31][2];

int main()
{

    /*
    Continuando la practica, última actualización día 24 de Noviembre de 2022
    */

    int opcion;
    bool inicioSesion = true;
    // string usuarioD = "admin";
    // string contraD = "admin";
    administradores[0][0] = "admin"; // usuario
    administradores[0][1] = "admin"; // contrasenia

    string usuario, contrasenia;

    do
    {
        cout << "\n==============MENU PRINCIPAL==============\n"
             << endl;
        cout << "1. Iniciar sesión\n2. Salir" << endl;
        cout << "\nIngrese una opción: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            do
            {
                cout << "\n==============INICIAR SESION==============\n"
                     << endl;
                cout << "Ingrese su usuario: ";
                cin >> usuario;
                cout << "Ingrese su contrasenia: ";
                cin >> contrasenia;

                for (int i = 0; i < 31; i++)
                {
                    if (usuario == administradores[i][0] && contrasenia == administradores[i][1])
                    {
                        // accion si ambos son verdaderos
                        inicioSesion = false;
                        break;
                    }
                    else if (usuario == administradores[i][0])
                    {
                        // acciones si la contrasenia es incorrecta
                        cout << "\nContrasenia incorrecta :(" << endl;
                    }
                    else if (contrasenia == administradores[i][1])
                    {
                        // acciones si el usuario es incorrecto
                        cout << "\nUsuario incorrecto :(" << endl;
                    }
                    else
                    {
                        // acciones si el usuario y la contrasenia son incorrectos
                        cout << "\nEl usuario y la contrasenia son incorrectos :(" << endl;
                    }
                }

                if (!inicioSesion)
                {
                    do
                    {
                        cout << "\n==============MENU ADMINISTRADOR==============\n"
                             << endl;
                        cout << "1. Gestionar Administradores\n2. Bodegas\n3. Reportes\n4. Regresar al menu anterior" << endl;
                        cout << "Ingrese una opcion: ";
                        cin >> opcion;

                        switch (opcion)
                        {
                        case 1: // if opcion == 1
                            // Gestionar Administradores
                            break;
                        case 2: // else if opcion == 2
                            // Menu de bodegas
                            break;
                        case 3:
                            // Menu de Reportes
                            break;
                        case 4:
                            // Regresar al menu anterior
                            break;
                        default:
                            // En caso de errores
                            break;
                        }
                    } while (opcion != 4);
                }

            } while (inicioSesion);

            break;
        case 2:
            cout << "\nGracias por usar mi servicio" << endl;
            break;
            // exit(0);
        default:
            cout << "\nLa opción que ingreso no es valida, por favor ingrese una opción entre [1-2]" << endl;
            break;
        }
    } while (opcion != 2);

    return 0;
}