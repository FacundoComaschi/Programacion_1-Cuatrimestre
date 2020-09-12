#include <stdio.h>
#include "funciones.h"

void mostrar (float x, float y)
{
    printf("Calcular la suma de %.1f + %.1f \n",x,y);
    printf("Calcular la resta de %.1f - %.1f \n",x,y);
    printf("Calcular la division de %.2f / %.2f \n",x,y);
    printf("Calcular la multiplicacion de %.2f * %.2f \n",x,y);
    printf("Calcular la factorizacion de %.1f y de %.1f \n",x,y);
}

float sumar(float a, float b)
{
float r;
r=a+b;
printf("El resultado de la suma de %.1f + %.1f es : %.1f \n" ,a,b, r);
return 0;
}

float restar(float a, float b)
{
float r;
r=a-b;
printf("El resultado de la resta de %.1f - %.1f es : %.1f \n" ,a,b, r);
return 0;
}

float multiplicar(float a, float b)
{
float r;
r=a*b;
printf("El resultado de la multiplicacion de %.2f * %.2f es : %.2f \n" ,a,b, r);
return 0;
}

float dividir(float a, float b)
{
float r;
r=a/b;
printf("El resultado de la division de %.2f / %.2f es : %.2f \n" ,a,b, r);
return 0;
}

int factorial(int x)
{
    int numeroFactorialx;
    numeroFactorialx=1;

   for(int i=x; i>0; i--)
   {
       numeroFactorialx=i*numeroFactorialx;
   }
    printf("Factorial de numero %d es: %d\n",x,numeroFactorialx);

return 0;
}
