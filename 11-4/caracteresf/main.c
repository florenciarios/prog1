#include <stdio.h>
#include <stdlib.h>
#define CANT 3

int main()
{
    int legajo[CANT];
    char nombre[CANT][31];
    float salario [CANT];
    int i;

    for(i=0;i<CANT;i++)
    {
        legajo[i]=i+1;
        printf("Legajo: %d \n",legajo[i]);

        printf("Nombre: ");
        fflush(stdin);
        scanf("%[^\n]",nombre[i]);

        printf("Salario: ");
        scanf("%f",&salario[i]);
    }

    system("cls");

    system("pause");

    for(i=0;i<CANT;i++)
    {
        printf("Legajo: %d \n",legajo[i]);
        printf("Nombre: %s \n",nombre[i]);
        printf("Salario: %.2f \n",salario[i]);
    }

    return 0;
}
