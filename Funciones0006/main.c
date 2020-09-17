#include <stdio.h>
#include <stdlib.h>

float octava(float num);

int main()
{   /*Se ingresa un valor entero y se desea obtener la 8va parte.*/
    //Funciona correctamente
    float num;
    printf("Ingrese un valor entero: ");
    scanf("%f",&num);
    printf("La octava parte es: %.3f", octava(num));
    return 0;
}
float octava(float num)
{
    float octava= num/8;
    return octava;
}
