#include <stdio.h>
#include <math.h>

int main()
{
    // calcular el cubo de un numero
    int num, cubo;
    printf("dame un numero: ");
    scanf("%i", &num);
    cubo = pow(num, 3);

    printf("El cubo de %i es %i.\n", num, cubo);
    printf("fin...");
}