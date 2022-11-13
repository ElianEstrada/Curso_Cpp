#include <iostream>

using namespace std;

// Esto es el entorno global
int num = 10;

int main(){ //Otro entorno

    cout << num << endl;

    //int num = 20;

    /*Entornos
    
        1. Entorno Global
        2. Entornos relativos
    */
    int num = 30;
    if (true) { //Otro entorno
        cout << num << endl;
    }

    cout << num << endl;

    return 0;
}