// La parte de las cabeceras.
#include  <iostream>

// sola para ahorra el tener que escribir std
using namespace std;

// Bloque principal y aquí ira todas las instrucciones
// que le demos al programa
int main(){
    //Cualquier instrucción debe terminar en ';'

    //Variable
    //<tipo> <nombre> ['=' <expresion>] ';'

    /*Tipos
        - int - representa números enteros - 1, 2, 3, 4, 100...
        - float - representa números decimales - 1.5 2.23 3.1416
        - char - representa caracters como 'a', 'b'
        - string - represnta cadenas de caracteres "Hola", "Adios"
        - boleanos - representan si algo es verdadero o falso. (true, false)
    */

   /*Nombres
        - que tiene que iniciar con letra o '_'
        - puede ir seguido de letras, números o '_'

        Ejemplo: num1, _num2, num_3, 
        Ejemplo - camelCase: numeroEntero; numero_entero -> esto no es camelCase;
   */

    // Declarar variables 
    int num1;

    // Declarar y asignar variables
    int num2 = 10;

    // asignar variables (ojo: la variable tiene que estar previamente declarada)
    num1 = 5;
    num2 = 20;

    //Creando variable para almacenar la edad del usuario
    int edad;

    // Formas de mostrar información
    cout << "Hola Mundo :)" << endl;

    // Como recibir información desde teclado (por el usuario)
    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "La edad del usuario es: " << edad << endl;

    return 0;
}