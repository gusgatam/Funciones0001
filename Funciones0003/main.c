#include <stdio.h>
#include <stdlib.h>

float porcentaje(float m, float f);
float porcentaje1(float m, float f);

int main()
{
    /*La jefa de recursos humanos de una empresa desea saber cuál es el porcentaje de
hombres y mujeres que han enviado su curricular postulándose para un puesto.*/
    //Funciona correctamente
    float m,f;
    printf("Ingrese el numero de postulantes masculinos: ");
    scanf("%f",&m);
    printf("Ingrese el numero de postulantes femeninos: ");
    scanf("%f",&f);
    printf("El porcentaje de masculinos es: %.3f%\nEl porcentaje de femeninos es: %.3f%", porcentaje( m, f), porcentaje1(m, f));
    return 0;
}
float porcentaje(float m, float f)
{

    float porcentaje = ((m*100)/(m+f));
    return porcentaje;
}
float porcentaje1(float m, float f)
{

    float porcentaje1 = ((f*100)/(m+f));
    return porcentaje1;
}
