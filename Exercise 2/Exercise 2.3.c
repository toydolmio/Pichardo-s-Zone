#include <stdio.h>
#include <math.h>

int main()
{
    float pro;
    printf("Ingrese el promedio del alumno: ");
    scanf("%f", &pro);

    if (pro >= 6)
        printf("\nAprobado\n");

    else
        printf("\nReprobado\n");
}
