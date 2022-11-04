#include <iostream>

using namespace std;

int main(){

    /*
    Variables acumuladoras

    sirven para acumular cantidades, por lo tanto estas variables
    por lo general son de tipo (int y float).
    */

    /*
    Sumar los primeros 10 números (1-10)
    */

    int acumuladora = 0;

    for (int i = 1; i <= 10; i++){
        //acumuladora = acumuladora + i;
        acumuladora += i;
    }

    cout << "La suma de los primeros 10 números es: " << acumuladora << endl;

    return 0;
}