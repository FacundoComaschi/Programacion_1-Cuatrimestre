//void sumar(int a, int b);
//void restar(int a, int b);
//void multiplicar(int a, int b);
//void dividir(int a, int b);

#include <stdio.h>
#include "funciones.h"
int main()
{
	int opciones;
    int a;
    int b;

	 do{
        printf("1. Ingresar primer numero \n2. Ingresar segundo numero \n3. Realizar suma \n4. Realizar resta \n5. Realizar multiplicacion \n6. Realizar division \n7. Realizar factorial \n8. Salir \n");
        printf("Seleccione una opcion: ");
        scanf("%d",&opciones);



	switch (opciones)
	{
		case 1:
        printf("Ingrese primer numero: \n");
        scanf("%d",&a);
        break;
        case 2:
        printf("Ingrese segundo numero: \n");
        scanf("%d",&b);
        break;
		case 3: sumar(a,b);
		break;
		case 4: restar(a,b);
		break;
		case 5: multiplicar(a,b);
		break;
		case 6: dividir(a,b);
		break;
        case 8:
        printf("El programa finalizo ");
        break;
	}
	}while(opciones!=8);
	return 0;
}


//void sumar(int a, int b)
//{

//printf("El resultado es: %d \n" , a + b);

//}

//void restar(int a, int b)
//{

//printf("El resultado es: %d \n" , a - b);

//}


//void multiplicar(int a, int b)
//{

//printf("El resultado es: %f \n" , a * b);

//}


//void dividir(int a, int b)
//{

//printf("El resultado es: %f \n" , a / b);

//}


