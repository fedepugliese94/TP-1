#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


float resultadoS (float a, float b)
{
    float resultadoS;
    resultadoS = a+b;
    return resultadoS;
}

float resultadoR (float a, float b)
{
    float resultadoR;
    resultadoR = a-b;
    return resultadoR;
}

float resultadoD (float a, float b)
{
    float resultadoD;
    resultadoD = a/b;
    return resultadoD;
}

float resultadoM (float a, float b)
{
    float resultadoM;
    resultadoM = a*b;
    return resultadoM;
}


int factorial(int a)
{
    int aMenos=0;
    int temp=a;
    for (aMenos=1;aMenos<a;aMenos++)
    {
        temp=aMenos*temp;
    }
    return temp;
}


