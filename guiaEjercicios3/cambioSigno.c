#include <stdio.h>

void cambiarSigno(int num) {
    int numCambiado;
    numCambiado = -1*num;
    printf("su numero con el signo cambiado es: %i\n\n", numCambiado);
}

int main() {
    int opcion, num;
    printf("1. Cambiar signo\n");
    printf("2. Salir\n");
    printf("Escoga: \n");
    scanf("%i", &opcion);

    switch (opcion) {
    case 1:
        printf("cual es el numero?\n");
        scanf("%i", &num);
        cambiarSigno(num);
        break;
    case 2:
        break;
    default:
        printf("opcion invalida...\n\n");
    }

    if (opcion != 2) { main(); }
}