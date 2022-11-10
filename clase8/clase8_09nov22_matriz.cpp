#include <iostream>

using namespace std;

int main(){

    /*
    Solicitar al usuario 5 nombres y 5 edades, almacenarlas en un arreglo
    de 2 dimensiones y luego mostrar cada nombre y su edad.
    */

    string alumnos[5][2];

    /*
              0       1
        [ [nombre],[edad] ]   0
        [ [nombre],[edad] ]   1
        [ [nombre],[edad] ]   2
        [ [nombre],[edad] ]   3
        [ [nombre],[edad] ]   4
    
    */

    for (int i = 0; i < 5; i++){
        cout << "Ingrese un nombre: ";
        cin >> alumnos[i][0];

        cout << "Ingrese su edad: ";
        cin >> alumnos[i][1];
    }

    for (int i = 0; i < 5; i++){
        cout << "Nombre: " << alumnos[i][0] << " con edad: " << alumnos[i][1] << endl;
    }


    return 0;
}