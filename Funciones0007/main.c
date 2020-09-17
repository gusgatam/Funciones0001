#include <stdio.h>
#include <stdlib.h>
int tuba(int num, int num1);

int main ()
{
    /*Diseñar un algoritmo que permita identificar el mayor de dos números ingresados por
teclado, en caso de ser iguales, muestre dicha relación.*/
    //Funciona correctamente

   int num=0, num1=0, retorno;
   printf("Ingrese un valor: ");
   scanf("%d", &num);
   printf("Ingrese un valor: ");
   scanf("%d", &num1);
   printf( "El mayor es: %d\n", tuba(num, num1));

   return 0;
}

int tuba(int num, int num1)
 {
   int retorno;

   if (num>num1)
   {
    retorno = num;
   }
   else if (num<num1)
   {
    retorno = num1;
   }
      else
      {
          printf("%d Es igual a %d\n", num, num1);
      }

   return retorno;
}
