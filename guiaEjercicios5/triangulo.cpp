#include <iostream>
using namespace std;

void checkearLados(float lado1, float lado2, float lado3) {
    if ((lado1 == lado2) && (lado2 == lado3) && (lado1 == lado3)) {
        cout << "es equilatero";
    } else if ((lado1 == lado2) || (lado2 == lado3) || (lado1 == lado3)) {
        cout << "es isoceles";
    }
}

main() {
    checkearLados(23,2,2);
}