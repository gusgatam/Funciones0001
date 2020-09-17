#include <stdio.h>
#include <stdlib.h>
float presion(float n, float a);

int main()
{
    /*Calcular la presión sobre una superficie.*/
    // Funciona correctamente
    float n,a;
    printf("Ingrese un la fuerza ejercida en N: ");
    scanf("%f",&n);
    printf("Ingrese el area en M^2: ");
    scanf("%f",&a);
    printf("La presion en P es: %.3f", presion(n, a));
    return 0;
}
float presion(float n, float a)
{
    float presion= n/a;
    return presion;
}
