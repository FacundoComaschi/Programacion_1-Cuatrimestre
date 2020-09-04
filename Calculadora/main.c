#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opciones;
    int a;
    int b;
    void suma(int a, int b);
    int r;

    do{
        printf("1. Ingresar primer numero \n2. Ingresar segundo numero \n3. Realizar suma \n4. Realizar resta \n5. Realizar multiplicacion \n6. Realizar division \n7. Realizar factorial \n8. Salir \n");
        printf("Seleccione una opcion: ");
        scanf("%d",&opciones);

        switch(opciones){

        case 1:
            printf("Ingrese primer numero: \n");
            scanf("%d",&a);

            break;
        case 2:
            printf("Ingrese segundo numero: \n");
            scanf("%d",&b);
            break;
        case 3:
            r= suma(a,b);
            printf( "\n   %d + %d = %d\n", a, b,r);
            break;
        case 4:
            printf("\n %d - %d = %d\n", a, b, a - b);
            break;
        case 5:
            printf("\n %d * %d = %f\n", a, b, a * b);
            break;
        case 6:
            printf("\n %d / %d = %f\n", a, b, a / b);
            break;
        case 8:
            printf("El programa finalizo ");
            break;
        }



    }while(opciones!=8);

    void int suma(int a, int b)
    {

    return (a+b);
    }

}
