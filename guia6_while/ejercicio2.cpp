// Desarrollar un programa que imprima los números impares en orden descendente que hay entre 1 y 100.

#include <iostream>
using namespace std;

void imprimir()
{
    int i = 100;
    while (i > 0)
    {
        if (i % 2 != 0)
            cout << i << endl;
            
        i--;
    }
}

main()
{
    cout << "imprimiendo numeros impares desde 100:" << endl;
    imprimir();
}