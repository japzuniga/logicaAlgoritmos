// Escriba el programa para calcular la suma de los cuadrados de los números entre 1 y 100.

#include <iostream>
#include <math.h>
using namespace std;

main()
{
    int suma = 0;
    int i = 1;
    while (i <= 100)
    {
        suma += pow(i, 2);
        i++;
    }

    cout << "la suma de los cuadrados de todos los numeros entre 1 y 100 es " << suma << endl;
}