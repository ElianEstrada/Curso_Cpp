#include <iostream>

using namespace std;

int mayor3(int a, int b, int c);
int mayor2(int a, int b);

int mayor2(int a, int b) {

    if (a > b) {
        return a;
    } 

    return b;
}

int main() {

    cout << "El numero mayor es: " <<  mayor3(3, 4, 1) << endl;

    return 0;
}

int mayor3(int a, int b, int c) {
    // donde a -> va ser el resultado de mayor2

    a = mayor2(a, b);

    if (a > c) {
        return a;
    }

    return c;
}