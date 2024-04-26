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