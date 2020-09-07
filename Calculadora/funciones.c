#include <stdio.h>
#include "funciones.h"


void sumar(int a, int b)
{

printf("El resultado de la suma de %d + %d es : %d \n" ,a,b, a + b);

}

void restar(int a, int b)
{

printf("El resultado de la resta de %d - %d es : %d \n" ,a,b, a - b);

}

void multiplicar(int a, int b)
{

printf("El resultado de la multiplicacion de %d * %d es : %d \n" ,a,b, a * b);

}


void dividir(int a, int b)
{

printf("El resultado de la division de %d / %d es : %d \n" ,a,b, a / b);

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
    printf("Factorial de numero %d \n",numeroFactorialA);

    for(b; b>0; b--)
   {
       numeroFactorialB=numeroFactorialB*b;
   }
    printf("Factorial de numero %d \n",numeroFactorialB);
}
//void ingreso(int a, int b)
//{
    //int primerNumero;
    //int segundoNumero;

    //printf("Ingrese primer numero");
    //scanf("%d",&primerNumero);

    //printf("ingrese segundo numero");
    //scanf("%d",&segundoNumero);
//}
