#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[10];
    char localidad[15];

    printf("Ingrese su nombre: ");
    scanf("%s",&nombre[10]);

    printf("Ingrese su localidad: ");
    scanf("%s",&localidad[15]);

    printf("Usted es %s y vive en %s",nombre,localidad);

    return 0;
}
