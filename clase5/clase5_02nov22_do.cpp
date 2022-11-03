#include <iostream>

using namespace std;

int main() {

    /*
    do-while

    'do' '{' <instrucciones> '}' 'while' '(' <condicion> ')' ';'

    */

    /*
    Solicitar al usurio si desea terminar el progra, 
    si contesta "SI" terminar el progra, y si contesta "NO" seguir preguntando
    */   

   /*string respuesta = "NO";

   while (respuesta == "NO") {
        cout << "Desea terminar el programa?: [SI/NO]";
        cin >> respuesta;
   }*/

    string respuesta;

    do {
        cout << "Desea terminar el programa? [SI/NO]: ";
        cin >> respuesta;
    } while (respuesta == "NO");

    cout << "Gracias por usar mi sistema" << endl;

    return 0;
}