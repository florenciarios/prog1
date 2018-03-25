#include <stdio.h>
#include <stdlib.h>

int main()
{
    char semana[15];

    printf("Ingrese un día de la semana: ");
    scanf("%s",&semana[15]);

    //NO SALE RESULTADO POR STRING xd

    switch(semana[15])
    {
        case 'lunes':
        case 'martes':
        case 'miercoles':
        case 'jueves':
        case 'viernes':
            printf("¡A trabajar!");
            break;
        case 'sabado':
        case 'domingo':
            printf("Buen finde");
            break;
        default:
            printf("No es un dia valido");
            break;
    }
    return 0;
}
