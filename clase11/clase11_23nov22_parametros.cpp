#include <iostream>

using namespace std;

// Es un procedimiento con parametros pasados por valor
void continarPregunta2(char respuesta, bool continuar) {
    if (respuesta == 'N') {
        continuar = false;
    }
}

// Es un procedimiento con parametros pasados por referencia
void continarPregunta(char respuesta, bool &continuar) {
    if (respuesta == 'N') {
        continuar = false;
    }
}


int main() {

    bool continuar = true;
    char respuesta;

    do {

        cout << "Desea continuar? [S/N]: ";
        cin >> respuesta;

        continarPregunta(respuesta, continuar);

    } while (continuar);

    return 0;
}