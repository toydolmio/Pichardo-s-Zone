#include <stdio.h>

int main ()
{
    int I, N;
    float LAN, SLA = 0;

    do
    {
        printf("Ingrese el numero de lanzamientos: \t");
        scanf("%d", &N);
    }

    while(N < 1 || N > 11);
    for (I = 1; I <= N; I++)
    {
        printf("\nIngrese el lanzamiento %d:", I);
        scanf("%f", &LAN);
        SLA = SLA + LAN;
    }

    SLA = SLA / N;
    printf("\nEl promedio de lanzamientos es: %.2f", LAN);
}
