#include <stdio.h>
#include <math.h>

int main ()
{
    float PRE,NPR;

    printf("ingrese el precio del producto: ");
    scanf("%f", &PRE);

    if (PRE < 1500)
        NPR = PRE * 1.11;

    else
        NPR = PRE * 1.08;
        printf("\nNuevo Precio: %8.2f", NPR);

}
