#include "Calculadora.h"

 float suma(float A, float B)
    {
       float respuesta;
       respuesta = A + B;
return respuesta;
        }
    float resta(float A, float B)
    {
        float respuesta;
        respuesta = A - B;
return  respuesta;
    }
    float multiplicacion(float A, float B)
    {
        float respuesta;
        respuesta = A * B;
    return  respuesta;
    }
    float division(float A, float B)
    {
        float resultado1;
            resultado1 = A / B;

    return  resultado1;
    }
    int factorial(int A)
    {

        int resultado;

        if (A == 0)
        {
             resultado = 1;
        }

        else
        {
            resultado = A* factorial(A-1);
        }
        return  printf("El resultado es: %d \n", resultado);


    }
