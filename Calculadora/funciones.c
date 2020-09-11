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

void sumar(float a, float b)
{

printf("El resultado de la suma de %.1f + %.1f es : %.1f \n" ,a,b, a + b);

}

void restar(float a, float b)
{

printf("El resultado de la resta de %.1f - %.1f es : %.1f \n" ,a,b, a - b);

}

void multiplicar(float a, float b)
{

printf("El resultado de la multiplicacion de %.2f * %.2f es : %.2f \n" ,a,b, a * b);

}

void dividir(float a, float b)
{

printf("El resultado de la division de %.2f / %.2f es : %.2f \n" ,a,b, a / b);

}

void factorial(int a, int b)
{
    int numeroFactorialA;
    numeroFactorialA=1;
    int numeroFactorialB;
    numeroFactorialB=1;
   for(a; a>0; a--)
   {
       numeroFactorialA=numeroFactorialA*a;
   }
    printf("Factorial de numero %d es: %d\n",a,numeroFactorialA);

    for(b; b>0; b--)
   {
       numeroFactorialB=numeroFactorialB*b;
   }
    printf("Factorial de numero %d es: %d\n",b,numeroFactorialB);
}
