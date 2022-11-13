#include <iostream>

using namespace std;

int main(){

    /*Punteros y direcciones de memoria
    
    int num = 0;  -> num -> 0x0000f1 = 0
    
    & -> ampersan
    */

    int num = 20; // 0x7fffffffda8c
    int numeros[5] = {1, 2, 3, 4, 5};   // int -> 4 bytes
    long numeros2[5] = {1, 2, 3, 4, 5}; // long -> 8 bytes
    string palabras[3] = {"bebe", "hola", "adios"}; // { 'b', 'e', 'b', 'e'}
 
    cout << &numeros[3] << endl; // 0x7fffffffda70 0x7fffffffda74 0x7fffffffda78 0x7fffffffda7c 
    cout << &numeros2[1] << endl;   // 0x7fffffffda40 0x7fffffffda48
    cout << &palabras[1] << endl; //0x7fffffffd9c0 0x7fffffffd9e0

    if (true) {
        int num;        // 4 bytes
        int num2;       // 4 bytes
        long num3;      // 8 bytes
        float decimal;  // 4 bytes
        // Este entorno pesa 20 bytes
    }

    return 0;
}