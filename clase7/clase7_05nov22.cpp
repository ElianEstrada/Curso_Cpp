#include <iostream>

using namespace std;

int main() {

    /*Arreglos o vectores
    
    Son una estructura de datos estáticos de tamaño fijo y secuencial.
    
    para definir un arreglo se utiliza la siguente estructura: 

    <tipo> <nombre> '[' <tamaño> ']'
    
    */


    //Ejemplo de arreglos 

    string nombres[5]; // tam = 5

    //indexación de nombres 
    // 0 - 4; nombres[0] - nombres[4];

    for (int i = 0; i < 5; i++){
        cout << "Ingrese el nombre: ";
        cin >> nombres[i];
    }

    for (int i = 0; i < 5; i++){
        cout << nombres[i] << endl;
    }

    return 0;
}