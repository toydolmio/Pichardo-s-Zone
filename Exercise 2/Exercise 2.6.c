#include <stdio.h>

int main()
{
    float SAL = 0;
    int NIV = 0;
    printf("Ingrese el nivel academico del profesor: ");
    scanf("%d", &NIV);

    printf("Ingrese el salario: ");
    scanf("%f", &SAL);

    switch(NIV)
    {
        case 1: SAL = SAL * 1.0035; break;
        case 2: SAL = SAL * 1.0041; break;
        case 3: SAL = SAL * 1.0048; break;
        case 4: SAL = SAL * 1.0053; break;
    }
    printf("\n\nNivel: %d \tNuevo Salario: %8.2f", NIV, SAL);
}
