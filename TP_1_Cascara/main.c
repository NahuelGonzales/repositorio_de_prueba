#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int suma(float x, float y);//Declaramos la funcion suma
int resta(float x, float y);//Declaramos la funcion resta
int division(float x, float y);//Declaramos la funcion division
int multiplicacion(float x, float y);//Declaramos la funcion multiplicacion

int main()
{
    char seguir='s';
    int opcion=0;
    float resultSuma;
    float resultResta;
    float resultMulti;
    float resultDivi;
    float resultFactorial;
    float primerOperando;
    float segundoOperando;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                fflush(stdin);
                scanf("%f",&primerOperando);
                break;
            case 2:
                fflush(stdin);
                scanf("%f",&segundoOperando);
                break;
            case 3:
                resultSuma=suma(primerOperando,segundoOperando);
                printf("\nEl resultado de la suma es: %f\n",resultSuma);
                break;
            case 4:
                resultResta=resta(primerOperando,segundoOperando);
                printf("\nEl resultado de la resta es: %f\n",resultResta);
                break;
            case 5:
                resultDivi=division(primerOperando,segundoOperando);
                printf("\nEl resultado de la division es: %f\n",resultDivi);
                break;
            case 6:
                resultMulti=multiplicacion(primerOperando,segundoOperando);
                printf("\nEl resultado de la multiplicacion es: %f\n",resultResta);
                break;
            case 7:
                break;
            case 8:
                resultSuma=suma(primerOperando,segundoOperando);
                printf("\nEl resultado de la suma es: %f\n",resultSuma);
                resultResta=resta(primerOperando,segundoOperando);
                printf("\nEl resultado de la resta es: %f\n",resultResta);
                resultDivi=division(primerOperando,segundoOperando);
                printf("\nEl resultado de la division es: %f\n",resultDivi);
                resultMulti=multiplicacion(primerOperando,segundoOperando);
                printf("\nEl resultado de la multiplicacion es: %f\n",resultMulti);
                break;
            case 9:
                seguir = 'n';
                break;
        }

    }
    return 0;
}
