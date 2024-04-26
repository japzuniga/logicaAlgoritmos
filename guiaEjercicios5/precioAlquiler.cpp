/*Una compañía dedicada al alquiler de automóviles, cobra $30 hasta un máximo de 500 KM de
distancia recorrida. Para más de 500 KM y hasta 1,000 KM, cobra $30 más
un monto adicional del 5% por cada kilómetro en exceso sobre 500. Para
más de 1,000 KM, cobra $30 más un monto adicional del 8% por cada
kilómetro en exceso sobre 1,000. Los precios ya incluyen el 15% del impuesto (IVA).
Escriba un programa, que determine el monto a pagar por el alquiler de un vehículo sin
impuesto, y el monto a pagar con el impuesto incluido.*/
#include <iostream>
using namespace std;

void checkearPrecio(float km) {
    float precio;
    if (km <= 500) {
        precio = km*30;
    } else if ((km > 500) && (km <= 1000)) {
        float exceso = km - 500;
        precio = km*30 * (0.05*exceso);
    } else if (km > 1000) {
        float exceso = km - 1000;
        precio = km*30 * (0.08*exceso);
    }

    //+ iva
    precio = precio + (precio*0.15);
    cout << precio;
}

main() {
    checkearPrecio(863.481);
}