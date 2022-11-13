#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    /*
    1. Tierra Santa ofrece a sus clientes descuentos por pagos a contado y a
    crédito de la siguiente manera:
    a. Para ventas menores a $250.000 pagando en efectivo se hace un
        descuento del 10% y con tarjeta de crédito el 5%.
    b. Para ventas iguales o superiores a $250.000 y menores a $500.000
        pagando en efectivo se hace un descuento del 15% y con tarjeta de
        crédito del 10%.
    с. Para ventas mayores o iguales a $500.000 y menores o iguales a
        $1.000.000 pagando en efectivo se hace un descuento del $20% y con
        tarjeta de crédito del 15%.
    d. Para ventas superiores a $1.000.000 pagando en efectivo se hace un descuento del
        25% y con tarjeta de crédito del 20%.

    Presentar al cliente valor inicial, el descuento y el valor a pagar.
    */

    double monto;
    int opcion;
    bool esEfectivo;
    double descuento;

    do {
        cout << "Ingrese el monto a comprar: ";
        cin >> monto;

        cout << "\n1. Pago en Efectivo\n2. Pago con Tarjeta de Credito\n3. Salir" << endl;
        cout << "Escoja la opción de pago: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                esEfectivo = true;
                break;
            case 2: 
                esEfectivo = false;
                break;
            case 3: 
                cout << "Gracias por usuar nuestro servicio :)" << endl;
                break;
            default: 
                cout << "La opción es invalida :(" << endl;
                break;
        }


        if (monto < 250000){
            if (esEfectivo){
                //El descuento con efectivo
                descuento = 10;
            } else {
                //El descuento con tarjeta
                descuento = 5;
            }
        } else if (monto >= 250000 && monto < 500000) {
            if (esEfectivo){
                //El descuento con efectivo
                descuento = 15;
            } else {
                //El descuento con tarjeta
                descuento = 10;
            }
        } else if (monto >= 500000 && monto <= 1000000) {
            if (esEfectivo){
                //El descuento en efectivo
                descuento = 20;
            } else {
                //El descuento con tarjeta
                descuento = 15;
            }
        } else {
            if (esEfectivo){
                //El decuento en efectivo
                descuento = 25;
            } else {
                //El descuento con tarjeta
                descuento = 20;
            }
        }

        cout << "\nEl monto inicial es de: $" << setprecision(2) << fixed << monto << endl;
        cout << "El descuento que se aplico es de: " << descuento << "%" << endl;
        cout << "El descuento en números es: $" << monto * (descuento / 100) << endl;
        cout << "La cantidad total a pagar es de: $" << setprecision(2) << fixed << monto - monto * (descuento / 100) << endl;

    } while (opcion != 3);

    return 0;
}