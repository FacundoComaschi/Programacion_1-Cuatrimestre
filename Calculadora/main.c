#include <stdio.h>
#include "funciones.h"
#include <stdlib.h>
int main()
{
	int opciones;
    float a;
    float b;


	 do{

        printf("-----------------------------------------\n");
        printf("|1.Ingrese primer numero (A=%.2f)       |\n",a);
        printf("|2.Ingrese segundo numero (B=%.2f)      |\n",b);
        printf("|3.Mostrar calculos                     |\n");
        printf("|4.Mostrar resultados                   |\n");
        printf("|5.Salir                                |\n");
        printf("|       Seleccione una opcion           |\n");
        printf("-----------------------------------------\n");
        scanf("%d",&opciones);
        system("cls");


	switch (opciones)
	{
		case 1:
        printf("Ingrese primer numero: \n");
        scanf("%f",&a);
        break;

        case 2:
        printf("Ingrese segundo numero: \n");
        scanf("%f",&b);
        break;

		case 3:
            mostrar(a,b);
		break;

		case 4:
            sumar(a,b);
            restar(a,b);
            multiplicar(a,b);
            if(b!=0)
            {
              dividir(a,b);
            }else(printf("Ingrese dividendo mayor a 0 \n"));

            if(a>=0 && b>=0)
            {
               factorial(a);
               factorial(b);
            }else(printf("No se puede realizar el factorial de un numero negativo \n"));

		break;

        case 5:
        printf("El programa finalizo ");
        break;
	}
	}while(opciones!=5);
	return 0;
}
