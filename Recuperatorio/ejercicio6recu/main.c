#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota;

    printf("Ingrese una nota: ");
    scanf("%d",&nota);

    //IF DEBE ESTAR ADENTRO DEL SWITCH

    switch(nota)
    {
        case 0:
        case 1:
        case 2:
        case 3:
            printf("La proxima se puede");
            break;
        case 4:
        case 5:
        case 6:
            printf("Raspando \n");
            break;
        case 7:
        case 8:
        case 9:
        case 10:
            printf("Aprobo \n");
            break;

        default:
            printf("La nota no es valida");
            break;
    }

        if(nota>=8)
        {
            printf("Muy bien \n");
        }
        else if(nota<5 && nota>3)
        {
            printf("Debes preocuparte mas \n");
        }

    return 0;
}
