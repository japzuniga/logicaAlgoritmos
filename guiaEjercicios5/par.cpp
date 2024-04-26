/*Escribir un programa para deducir
si una variable o expresión numérica es par.*/
#include <iostream>
using namespace std;

void esPar(int num) {
    if (num%2 == 0) { cout << "el numero es par"; }
}

main() {
    int num;
    cout << "introduce un numero: ";
    cin >> num;
    esPar(num);
}