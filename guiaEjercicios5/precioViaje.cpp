/*El director de una escuela, está organizando un viaje de estudios, y requiere
determinar, cuánto debe cobrar a cada alumno, y cuánto debe pagar a la compañía de
viajes por el servicio. La forma de cobrar es la siguiente: si son 100 alumnos o más, el
costo por cada alumno es de $60.00; de 50 a 99 alumnos, el costo es de $70.00; de
30 a 49, de $100.00; y si son menos de 30, el costo de la renta del autobús es de
$4,500.00, sin importar el número de alumnos. Escriba un programa que permita
determinar el pago a la compañía de autobuses y lo que debe pagar cada alumno por el viaje.*/
#include <iostream>
using namespace std;

void calcularCosto(int opcion, int numEstudiantes) {
    int precioBus = 4500;
    int cobrar, total;
    bool proceder = true;

    switch (opcion) {
    case 1:
        if (numEstudiantes < 100) {
            cout << "ERROR: numero de estudiantes debe estar dentro del rango seleccionado\n\n";
            proceder = false;
        } else { cobrar = numEstudiantes*60; }
        break;

    case 2:
        if ((numEstudiantes < 50) || (numEstudiantes > 99)) {
                cout << "ERROR: numero de estudiantes debe estar dentro del rango seleccionado\n\n";
                proceder = false;
        } else { cobrar = numEstudiantes*70; }
        break;

    case 3:
        if ((numEstudiantes < 30) || (numEstudiantes > 49)) {
                cout << "ERROR: numero de estudiantes debe estar dentro del rango seleccionado\n\n";
                proceder = false;
        } else { cobrar = numEstudiantes*100; }
        break;

    case 4:
        if (numEstudiantes > 30) {
                cout << "ERROR: numero de estudiantes debe estar dentro del rango seleccionado\n\n";
                proceder = false;
                break;
        } else { cobrar = numEstudiantes*120; }

    case 5: break;
    
    default:
        cout << "opcion invalida...\n\n";
        break;
    }

    if (proceder == true) {
        total = cobrar + precioBus;
        cout << "costo de autobus: " << precioBus << "\npago de estudiantes: " << cobrar << "\ncosto total de viaje: " << total << "\n\n";
    }
}

main() {
    int opcion, numEstudiantes;
    cout << "1. 100 o mas estudiantes\n";
    cout << "2. 50 a 99 estudiantes\n";
    cout << "3. 30 a 49 estudiantes\n";
    cout << "4. Menos de 30 estudiantes\n";
    cout << "5. Salir\n\n";
    cout << "Escoga el rango de estudiantes:\n";
    cin >> opcion;
    
    if ((opcion > 5) || (opcion < 1)) {
        cout << "opcion invalida\n\n";
        main();
    }

    cout << "\nDigite el numero exacto de estudiantes:\n";
    cin >> numEstudiantes;

    calcularCosto(opcion, numEstudiantes);

    if (opcion != 5) { main(); }
}