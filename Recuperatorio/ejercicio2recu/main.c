#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[4];
    char localidad[5];

    printf("Ingrese su nombre: ");
    fflush(stdin);
    scanf("%s",nombre);

    printf("Ingrese su localidad: ");
    fflush(stdin);
    scanf("%s",localidad);

    printf("Usted es %s y vive en %s",nombre,localidad);

    return 0;
}
