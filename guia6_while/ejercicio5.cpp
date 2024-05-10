/*Para un grupo de clase de 8 estudiantes, realice un programa
que permita calcular y dar como salida lo siguiente:
- Cantidad de alumnos aprobados
- Cantidad de alumnos reprobados
- Promedio general del grupo*/

#include <iostream>
using namespace std;
#define MAX 8
int notas[MAX];
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

void aprobar()
{
    int aprobados = 0;
    int reprobados = 0;
    int i = 0;
    while (i < MAX)
    {
        if (notas[i] > 70)
        {
            aprobados++;
        }
        else
        {
            reprobados++;
        }

        i++;
    }

    cout << endl;
    cout << aprobados << " estudiantes aprobaron la clase" << endl;
    cout << reprobados << " estudiantes reprobaron la clase" << endl;
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
    cout << "2. mostrar cuantos estudiantes aprobaron y reprobaron" << endl;
    cout << "3. calcular promedio de estudiantes" << endl;
    cout << "4. salir" << endl;
    cout << "escoja: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        agregarNotas();
        break;
    case 2:
        aprobar();
        break;
    case 3:
        promedio();
        break;
    case 4:
        cout << "\nsaliendo..." << endl;
        break;
    default:
        cout << "\nopcion invalida..." << endl;
        break;
    }

    if (opcion != 4)
    {
        main();
    }
}