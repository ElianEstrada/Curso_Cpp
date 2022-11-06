#include <iostream>

using namespace std;

int main() {

    int numeros[2][2][2] = { { {10, 12}, {34, 41} }, { {55, 6}, {7, 8} } };

    /*
    numeros tiene: 
    2 páginas
    2 filas
    2 columnas
    */

    for (int i = 1; i >= 0; i--){
        for (int j = 1; j >= 0; j--){
            for (int k = 1; k >= 0; k--){
                cout << numeros[i][j][k] << " ";
            }
            cout << endl;
        }
    }


    return 0;
}