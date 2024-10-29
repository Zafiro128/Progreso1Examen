#include <stdio.h>
#include "funciones.h"

void IngresarNombres(char Nombres[5][20]){
    printf("Ingresar Nombres\n");
    for (int i = 0; i < 5; i++)
    {
       printf("Ingresa Nombre Persona %d", i+1);
       fgets(Nombres[i], 20, stdin);
    }
}

void IngresarEdad(int Edad[5]){
    printf("Ingresar Edad\n");
    for (int i = 0; i < 5; i++)
    {
       printf("Ingresa Edad Persona %d", i+1);
       scanf("%d", &Edad[i]);
       if (Edad[i] < 0)
       {
        i--;
        printf("Ingresa una Edad valida");
       }
       
    }
}

void IngresarCivil(int Civil[5]){
    printf("Ingresar Estado Civil 1=Casado 0=Soltero\n");
    for (int i = 0; i < 5; i++)
    {
       printf("Ingresa Estado Civil Persona %d", i+1);
       scanf("%d", &Civil[i]);
         if (Civil[i] < 0 || Civil[i] > 1)
       {
        i--;
        printf("Ingresa un Estado Civil valido");
       }
    }
}

void BuscarE(char Nombres[5][20], int Edad[5], int Civil[5], int BusquedaE){


        printf("Busqueda por Edad Ingresa una Edad\n");
        scanf("%d", &BusquedaE);
        for (size_t i = 0; i < 5; i++)
        {
            if (BusquedaE == Edad[i])
            {
                printf("");
            }
            
        }
}

void BuscarC(char Nombres[5][20], int Edad[5], int Civil[5], int BusquedaC){

}