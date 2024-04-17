#include <stdio.h>

void convertirFahr(float fahr) {
    float celsius = 5/9 * (fahr + 32);
    printf("la temperatura en grados celsius es: %.2f\n\n", celsius);
}

void convertirCelsius(float celsius) {
    float fahr = (9/5 * celsius) - 32;
    printf("la temperatura en grados fahrenheit es: %.2f\n\n", fahr);
}

int main() {
    int opcion;
    float fahr, celsius;
    //menu
    printf("1. Convertir de Fahrenheit a Celsius\n");
    printf("2. Convertir de Celsius a Fahrenheit\n");
    printf("3. Salir\n");
    printf("Escoga: \n");
    scanf("%i", &opcion);

    //function calls
    switch (opcion) {
    case 1:
        printf("cual es la temperatura en fahrenheit?\n");
        scanf("%f", &fahr);
        convertirFahr(fahr);
        break;
    case 2:
        printf("cual es la temperatura en celsius?\n");
        scanf("%f", &celsius);
        convertirCelsius(celsius);
        break;

    case 3: break;
    default: printf("opcion invalida...\n\n"); break;
    }

    //reiniciar menu
    if (opcion != 3) { main(); }
}