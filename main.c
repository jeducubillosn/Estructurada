#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    printf("Entrada de datos Parte 1\n\n");

    int integerA;
    float flotanteA;
    char caracterA;

    printf("Ingresa el valor de integerA es: ");
    scanf("%i", &integerA);

    printf("Ingresa el valor de flotanteA es: ");
    scanf("%f", &flotanteA);

    printf("Ingresa el valor de caracterA es: ");
    scanf(" %c", &caracterA);

    printf("\n\n");
    printf("integerA: %d\n", integerA);
    printf("flotanteA: %f\n", flotanteA);
    printf("caracterA: %c\n", caracterA);

    return 0;
}

