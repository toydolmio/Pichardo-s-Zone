#include <stdio.h>

int main()
{
    float PAG, SPA;
    SPA = 0;
    printf("Ingrese el primer Pago:\t");
    scanf("%f", &PAG);

    while (PAG)
    {
        SPA = SPA = + PAG;
        printf("Ingrese el siguiente pago:\t");
        scanf("%f",&PAG);
    }
    printf("\nEl total de pagos del mes es: %.2f", SPA);
}
