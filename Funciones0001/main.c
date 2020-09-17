#include <stdio.h>
#include <stdlib.h>

/*Confeccionar el diagrama necesario para codificar un programa el cual me permita in-
gresar 2 números por teclado y los muestre por pantalla en líneas separadas.*/
//No estoy seguro de haber entendido este ejercicio, pero utiliza funciones...
int lector();
int lector1();
int main()
{
    printf("Los numeros ingresados son: \n%d\n%d", lector(), lector1());
    return 0;
}
int lector()
{
    int a;
    printf("ingrese un numero: ");
    scanf("%d", &a);
    return (a);
}
int lector1()
{
    int b;
    printf("ingrese un numero: ");
    scanf("%d", &b);
    return (b);
}

