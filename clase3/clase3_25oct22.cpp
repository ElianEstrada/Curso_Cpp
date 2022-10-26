#include <iostream>

using namespace std;

int main(){

    int edad;

    cout << "Por favor ingrese su edad: ";
    cin >> edad;

    if (edad > 17){
        cout << "Usted es mayor de edad" << endl;
    } else {
        cout << "Usted es menor de edad" << endl;
    }

    return 0;
}