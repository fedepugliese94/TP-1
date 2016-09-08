#include <stdio.h>
#include <stdlib.h>
#include "functions.h"


float suma(float a, float b)
{
    float resultadoS;
    resultadoS = a+b;
    return resultadoS;
}

float resta(float a,float b)
{
    float resultadoR;
    resultadoR= a-b;
    return resultadoR;
}

float division(float a,float b)
{
    float resultadoD;
    resultadoD = a/b;
    return resultadoD;
}

float multiplicacion(float a,float b)
{
    float resultadoM;
    resultadoM = a*b;
    return resultadoM;
}


int factorial(int a)
{
    int aMenos=0;
    int temp=a;
    for (aMenos=1; aMenos<a; aMenos++)
    {
        temp=aMenos*temp;
    }
    return temp;
}
