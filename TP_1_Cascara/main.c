#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float numero1;
    float numero2;
    float suma;
    float resta;
    float multiplicacion;
    float division;
    float x;
    float y;
    int resultadoFac;



    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%.2f)\n", x);
        printf("2- Ingresar 2do operando (B=%.2f)\n", y);
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
                printf("Introducir el primer numero: \n");
                scanf("%f", &numero1);
                x= numero1;
                system("pause");
                system("cls");
                break;
            case 2:
                printf("Introducir el segundo numero: \n");
                scanf("%f", &numero2);
                y = numero2;
                system("pause");
                system("cls");
                break;
            case 3:
                suma=resultadoS(numero1,numero2);
                printf("La suma es: %.2f \n", suma);
                system("pause");
                system("cls");
                break;
            case 4:
                resta=resultadoR(numero1,numero2);
                printf("La resta es: %.2f \n", resta);
                system("pause");
                system("cls");
                break;
            case 5:
                if (numero2 == 0)
                    {
                        printf("No se puede dividir por 0(cero), por favor cambiar de numero. \n");
                        scanf("%f", &numero2);
                        y = numero2;
                    }
                    else
                        {
                            division=resultadoD(numero1,numero2);
                            printf("El resultado de: %.2f \n", division);
                            system("pause");
                            system("cls");
                        }
                break;
            case 6:
                multiplicacion=resultadoM(numero1,numero2);
                printf("El resultado es: %.2f \n", multiplicacion);
                system("pause");
                system("cls");
                break;
            case 7:
                printf("Aviso: El factoreo se realizara solo con el numero uno.\n");
                if(numero1<=0)
                    {
                        printf("Imposible factorear numeros menores o iguales a 0 (cero). \n");
                        printf("Volver a introducir numero: ");
                        scanf("%f", &numero1);
                        x= numero1;
                        system("pause");
                        system("cls");
                    }
                    else
                        {
                            resultadoFac=factorial(numero1);
                            printf("El resultado es: %d \n",resultadoFac);
                            system("pause");
                            system("cls");

                        }

                break;
            case 8:
                suma=resultadoS(numero1, numero2);
                resta=resultadoR(numero1, numero2);
                division=resultadoD(numero1, numero2);
                multiplicacion=resultadoM(numero1, numero2);
                printf("Los resultados: \n suma %.2f \n resta %.2f \n division %.2f \n multiplicacion %.2f \n", suma, resta, division, multiplicacion);
                system("pause");
                system("cls");
                break;
            case 9:
                seguir = 'n';
                break;
        }

    }
    return 0;
}
