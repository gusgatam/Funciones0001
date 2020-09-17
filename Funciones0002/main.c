#include <stdio.h>
#include <stdlib.h>
    /*Diseñar un algoritmo para calcular el perímetro y el área de un rectángulo.

        PERÍMETRO
        P = 2· a + 2· b
        ÁREA
        A= a · b
    */
int perimetro(int a, int b);
int area(int a, int b);
int main()
{
    //Funciona correctamente
    int a, b;
    printf("ingrese un valor para hallar el perimetro y area:\n ");
    scanf("%d",&a);
    printf("ingrese un valor para hallar el perimetro y area:\n ");
    scanf("%d",&b);
    printf("Perimetro: %d\nArea: %d", perimetro(a, b), area(a, b));
    return 0;
}
int perimetro(int a, int b)
{
    int perimetro = (2*a)+(2*b);
    return perimetro;
}
int area(int a, int b)
{
    int area=a*b;
    return area;
}
