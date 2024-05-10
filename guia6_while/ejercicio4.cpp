/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está compuesta
por 10 estudiantes y que se tiene la nota de cada uno de ellos.*/

#include <iostream>
using namespace std;
#define MAX 10
float notas[MAX];
int indice = 0;

void agregarNotas()
{
    while (indice < MAX)
    {
        cout << "\nnota de estudiante " <<  indice+1 << ": ";
        cin >> notas[indice];
        indice++;
    }
}

void promedio()
{
    float suma = 0;
    int i = 0;
    if (indice < MAX)
        cout << "\nfaltan las notas de " << MAX - indice << " estudiantes" << endl;
    else
    {
        while (i < MAX)
        {
            suma += notas[i];
            i++;
        }

        float promedio = suma / MAX;
        cout << "\nel promedio de la clase es: " << promedio << endl;
    }
}

main()
{
    int opcion;
    cout << "\n1. agregar notas de estudiantes" << endl;
    cout << "2. calcular promedio de estudiantes" << endl;
    cout << "3. salir" << endl;
    cout << "escoja: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        agregarNotas();
        break;
    case 2:
        promedio();
        break;
    case 3:
        cout << "\nsaliendo..." << endl;
        break;
    default:
        cout << "\nopcion invalida..." << endl;
        break;
    }

    if (opcion != 3)
    {
        main();
    }
}