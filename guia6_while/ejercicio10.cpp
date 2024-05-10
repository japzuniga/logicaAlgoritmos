/*Implementa un programa que solicite al usuario ingresar una matriz y
luego calcule su transposición. La transposición de una matriz se
realiza intercambiando filas por columnas. Imprime la matriz transpuesta como salida.*/

#include <iostream>
using namespace std;
#define FILAS 5
#define COLUMNAS 5

int matriz[FILAS][COLUMNAS];
int transpuesta[FILAS][COLUMNAS];
int filas, columnas;

void ingresar(int filas, int columnas)
{
    // entradas:
    int num;
    cout << endl;
    int x = 0;
    while (x < filas)
    {
        int y = 0;
        while (y < columnas)
        {
            cout << "ingresar numero en fila " << x + 1 << ", columna " << y + 1 << ": ";
            cin >> num;
            matriz[x][y] = num;
            y++;
        }
        x++;
    }
}

void transponer()
{
    // intercambia las filas y columnas de la matriz
    int x = 0;
    while (x < filas)
    {
        int y = 0;
        while (y < columnas)
        {
            transpuesta[y][x] = matriz[x][y];
            y++;
        }
        x++;
    }

    cout << "\nmatriz ingresada:" << endl;
    x = 0;
    while (x < filas)
    {
        cout << "[";
        int y = 0;
        while (y < columnas)
        {
            if (y == columnas - 1)
            {
                cout << matriz[x][y] << "]" << endl;
            }
            else
            {
                cout << matriz[x][y] << ", ";
            }
            y++;
        }
        x++;
    }

    // salida:
    cout << "\ntransposicion de matriz ingresada:" << endl;
    x = 0;
    while (x < columnas)
    {
        // abrir corchete cuando se inicia una nueva fila
        cout << "[";
        // imprimir numeros de la columna
        int y = 0;
        while (y < filas)
        {
            // si esta en el ultimo numero de la fila, imprimir el numero y cerrar corchete (sin coma)
            if (y == filas - 1)
            {
                cout << transpuesta[x][y] << "]" << endl;
            }
            // si no es el ultimo numero, imprimir el numero, un coma y un espacio para que el proximo numero este separado
            else
            {
                cout << transpuesta[x][y] << ", ";
            }
            y++;
        }
        x++;
    }
}

main()
{
    int opcion;
    cout << "\n1. ingresar datos de matriz" << endl;
    cout << "2. transponer matriz" << endl;
    cout << "3. salir" << endl;
    cout << "escoja: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "\ningresar cantidad de filas: ";
        cin >> filas;
        cout << "ingresar cantidad de columnas: ";
        cin >> columnas;
        ingresar(filas, columnas);
        break;
    case 2:
        transponer();
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