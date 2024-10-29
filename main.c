#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {
char Nombres[5][20];
int Edad[5];
int Civil[5];
int BusquedaE;
int BusquedaC;

IngresarNombres(Nombres[5][20]);
IngresarEdad(Edad[5]);
IngresarCivil(Civil[5]);
BuscarE(Nombres[5][20], Edad[5], Civil[5], BusquedaE);
BuscarC(Nombres[5][20], Edad[5], Civil[5], BusquedaC);
    return 0;
}

