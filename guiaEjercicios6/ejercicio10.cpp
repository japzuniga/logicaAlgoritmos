/*Implementa un programa que solicite al usuario ingresar una matriz y
luego calcule su transposición. La transposición de una matriz se
realiza intercambiando filas por columnas. Imprime la matriz transpuesta como salida.*/

#include <iostream>
using namespace std;
#define MAX_X 5
#define MAX_Y 5

int matriz[MAX_X][MAX_Y];
int transpuesta[MAX_X][MAX_Y];
int filas, columnas;

void ingresar(int filas, int columnas) {
    int temp;
    cout << endl;
    for (int i = 0; i < filas; i++) {
        for (int x = 0; x < columnas; x++) {
            cout << "ingresar numero en fila " << i+1 << ", columna " << x+1 << ": ";
            cin >> temp;
            matriz[i][x] = temp;
        }
    }
}

void transponer() {
    for (int i = 0; i < filas; i++) {
        for (int x = 0; x < columnas; x++) {
            transpuesta[x][i] = matriz[i][x];
        }
    }

    cout << "\nla transposicion de la matriz ingresada es: { ";
    for (int i = 0; i < columnas; i++) {
        cout << "[";
        for (int x = 0; x < filas; x++) {
            if (x == filas-1) {
                cout << transpuesta[i][x] << "], ";
            }
            else if ((x == filas-1) && (i == columnas-1)) {
                cout << transpuesta[i][x] << "] }" << endl;
            }
            else {
                cout << transpuesta[i][x] << ", ";
            }
        }
    }
}

main() {
    int opcion;
    cout << "\n1. ingresar datos de matriz" << endl;
    cout << "2. transponer matriz" << endl;
    cout << "3. salir" << endl;
    cout << "escoga: ";
    cin >> opcion;

    switch (opcion) {
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

    if (opcion != 3) { main(); }
}