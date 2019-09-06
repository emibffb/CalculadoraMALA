#include <stdio.h>
#include <stdlib.h>
#include "Calculadora.h"
int main()
{
    float num1 = 0;
    float num2 = 0;
    int opcion;
    float sumar;
    float restar;
    float multiplicar;
    float dividir;
    int factoria12;
    int seguir;



        // Solicitamos los valores y abrimos el menu
        do{

        printf( "  CALCULADORA \n ");
        printf( " CASO 1. Ingrese el primer valor: \n ");
        printf( " CASO 2. Ingresar el segundo valor: \n ");
        printf( " CASO 3. Calcular. \n ");
        printf( " CASO 4. Mostrar resultado. \n " );
        printf( " CASO 5. Salir \n " );

        printf ( " Ingrese una opcion:\n" );
        scanf("%d",&opcion);

        // Se abre la estructura para elegir las opciones.

        switch (opcion)
        {
        case 1:
        printf ("Ingrese el primer valor: \n " );
        scanf ("%f ", &num1);

        break ;

        case 2:
            printf ( " Ingrese el segundo valor: \n " );
            scanf("%f ",&num2);

        break ;

        case 3:
                sumar = suma(num1, num2);

                restar = resta(num1,num2);

                if(num2 > 0)

                {
                    dividir = division(num1,num2);
                }

                else

                {
                    dividir = 0;
                  printf("Error. No se puede dividir por 0 \n");
                }

                multiplicar = multiplicacion(num1, num2);

                factoria12= factorial(num1);


            printf( " Operacion completada \n " );
            system("Pause");
            break;

                // Acá mostramos los resultados de todas las operaciones.
        case 4:
            printf( " 4. Informar resultados \n " );
            printf( "\n a) El resultado de la suma es: %f + %f %f\n " ,num1,num2, sumar);
            printf( "\n b) El resultado de la resta es%f - %f: %f \n ",num1,num2, restar);
            printf( "\n c) El resultado de la division es: %f / %f %f \n " ,num1,num2, dividir);
            printf( "\n d) El resultado de la multiplicacion es:%f * %f: %f \n" ,num1,num2, multiplicar);
            printf( "\n e)El factorial de A es: %f %d \n ",num1,factoria12);
        break;
        case 5:
            printf ( "Oprima s para salir \n" );
            fflush (stdin);
            scanf ( " %d " ,&seguir);

            break ;

        default:
            printf ( "Error. Ingrese una opciones valida \n" );



        }

        } while ( opcion !=  5);



        return 0 ;

}
