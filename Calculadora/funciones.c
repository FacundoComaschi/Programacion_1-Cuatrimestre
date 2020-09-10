#include <stdio.h>
#include "funciones.h"

/** \brief Muestra los calculos en pantalla a realizar con los datos ingresados.
*   \param float X Primer numero ingresado por el usuario.
*   \param float Y Segundo numero ingresado por el usuario.
*/


void mostrar (float x, float y)
{
    printf("Calcular la suma de %.1f + %.1f \n",x,y);
    printf("Calcular la resta de %.1f - %.1f \n",x,y);
    printf("Calcular la division de %.2f / %.2f \n",x,y);
    printf("Calcular la multiplicacion de %.2f * %.2f \n",x,y);
    printf("Calcular la factorizacion de %.1f y de %.1f \n",x,y);
}

/** \brief Funcion sumar, realiza la suma y pasa el resultado cuando la funcion es llamada.
*   \param float a Primer numero ingresado por el usuario.
*   \param float b Segundo numero ingresado por el usuario.
*/

void sumar(float a, float b)
{

printf("El resultado de la suma de %.1f + %.1f es : %.1f \n" ,a,b, a + b);

}
/** \brief Funcion restar, realiza la resta y pasa el resultado cuando la funcion es llamada.
*   \param float a Primer numero ingresado por el usuario.
*   \param float b Segundo numero ingresado por el usuario.
*/

void restar(float a, float b)
{

printf("El resultado de la resta de %.1f - %.1f es : %.1f \n" ,a,b, a - b);

}
/** \brief Funcion multiplicar, realiza la multiplicacion y pasa el resultado cuando la funcion es llamada.
*   \param float a Primer numero ingresado por el usuario.
*   \param float b Segundo numero ingresado por el usuario.
*/

void multiplicar(float a, float b)
{

printf("El resultado de la multiplicacion de %.2f * %.2f es : %.2f \n" ,a,b, a * b);

}
/** \brief Funcion dividir, realiza la division y pasa el resultado cuando la funcion es llamada.
*   \param float a Primer numero ingresado por el usuario.
*   \param float b Segundo numero ingresado por el usuario.
*/

void dividir(float a, float b)
{

printf("El resultado de la division de %.2f / %.2f es : %.2f \n" ,a,b, a / b);

}
/** \brief Funcion factorial, realiza la factorizacion de ambos datos ingresados y pasa el resultado cuando la funcion es llamada.
*   \param int a Primer numero ingresado por el usuario.
*   \param int b Segundo numero ingresado por el usuario.
*   \param int numeroFactorialA toma el valor de 1 para luego realizar la multiplicacion y se guarda el resultado.
*   \param int numeroFactorialB toma el valor de 1 para luego realizar la multiplicaicon y se guarda el resultado.
*/

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
