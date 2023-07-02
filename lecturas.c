#include <stdio.h>
#include "lecturas.h"

int leerEnteroPositivo(char *mensaje)
{
    int valor;
    do{
        printf("\n%s",mensaje);
        scanf("%d",&valor);
    }while(valor <= 0);
    return valor;
}

int leerEnteroMayorQue(char *mensaje,int a)
{
    int valor;
    do{
        printf("\n%s",mensaje);
        scanf("%d",&valor);
    }while(valor<=a);
    return valor;
}

int leerEnteroEntre(char *mensaje,int menor,int mayor){
  int valor;
  do{
    printf("\n%s entre %d y %d: ",mensaje,menor,mayor);
    scanf("%d",&valor);
  } while (valor < menor || valor > mayor);
  return valor;
}

int LeerEnteroMayorIgualCero(char *mensaje)
{
    int valor;
    do{
        printf("\n%s",mensaje);
        scanf("%d",&valor);
    }while(valor < 0);
    return valor;
}

float leerDecimalPositivo(char *mensaje)
{
    float valor;
    do{
        printf("\n%s",mensaje);
        scanf("%f",&valor);
    }while(valor <= 0);
    return valor;
}

float LeerDecimalMayorIgualCero(char *mensaje)
{
    float valor;
    do{
        printf("\n%s",mensaje);
        scanf("%f",&valor);
    }while(valor < 0);
    return valor;
}

float leerDecimalMayorQue(char *mensaje,float a)
{
    float valor;
    do{
        printf("\n%s",mensaje);
        scanf("%f",&valor);
    }while(valor<=a);
    return valor;
}

float leerDecimalEntre(char *mensaje,float menor,float mayor){
  float valor;
  do{
    printf("\n%s entre %f y %f: ",mensaje,menor,mayor);
    scanf("%f",&valor);
  } while (valor < menor || valor > mayor);
  return valor;
}