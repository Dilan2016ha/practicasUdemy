#include <stdio.h>
#include <stdlib.h>'
#include "lecturas.h"

//Numero de aprobados y suspensos

int main(){
    int numAlum,contAprobados=0,contSuspensos=0;
    float nota;
    numAlum=leerEnteroPositivo("Ingrese el numero de alumnos: ");
    for(int i=1;i<numAlum;i++){
        do{
            printf("\nIngrese la nota del %d alumno: ",i);
            scanf("%f",&nota);
        }while(nota<0);
        if(nota>=5){
            contAprobados++;
        }else{  
            contSuspensos++;
        }
    }
    printf("\nEl numero de alumnos aprobados es: %d y de suspensos es: %d",contAprobados,contSuspensos);
    return 0;
}