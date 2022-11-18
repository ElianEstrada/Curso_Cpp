#include <iostream>

using namespace std;

void mostrarNombre(); //Declarando el procedimiento
void mostrarNombre2(string nombre); // Declarando el procedimiento
void suma(int a, int b);
int suma2(int a, int b);

void mostrarNombre() {  // Implementando el procedimiento
    cout << "Elian Estrada" << endl;
}

void mostrarNombre2(string nombre) {
    cout << nombre << endl;
}

void suma(int a, int b) {
    cout << a + b << endl;
}

int suma2(int a, int b){
    return a + b; // return 5;
}

int main(){

    /*
        Subprogramas: es un bloque de código en el que se puede
        tener una serie de instrucciones apartadas de la principal. 

        Hay varias formas de llamarlo o tipos: 

        - Procedimientos: es un subprograma que no retorna nada.
        - Funciones: es un subprograma que retorna (o devuelve) un valor.
        - Metodos: este pueden ser procedimientos o funciones pero que pertenecen a una clase.

        Estructura:

        Declarar: 
        <tipo> <nombre> '(' [<lista_parametros>] ')' ';'

        Implementacion: 

        <tipo> <nombre> '(' [<lista_parametros>] ')' '{' <lista_instrucciones> '}'

        Aca tipo: 
        - void      -> vacio
        - int       -> numeros enteros
        - float     -> numeros decimales
        - double    -> numeros decimales pero mas preciosos
        - string    -> cadena de caracteres
        - char      -> un caracter
        - otros.    -> son defenidos por nosotros

        <lista_parametros> : esta va ser como una declaracion de variables sepradas por ,
        las cuales vamos a poder utilizar dentro del subprograma.


        Llamar al subprograma
        <nombre> '(' [<lista_de_valores>] ')' ';'

    */


    //Procedimiento sin parametros
    mostrarNombre(); // -> cout << "Elian Estrada" << endl;
    mostrarNombre();
    mostrarNombre();

    //Procedimiento con parametros
    mostrarNombre2("Saul Urbina");
    mostrarNombre2("Alex Martinez");

    // Procedimiento con parametros enteros
    suma(10, 15);
    suma(1, 12);
    suma(451, 127);

    int num1, num2;
    int resultado;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    suma(num1, num2);

    //Funciones con parametros
    resultado = suma2(num1, num2); // resultado = 5;

    cout << resultado << endl;
    cout << suma2(num1, num2) << endl; // cout << 5 << endl;

    return 0;
}
