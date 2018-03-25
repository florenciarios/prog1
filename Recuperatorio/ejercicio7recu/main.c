#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota;
    int edad;
    char sexo;
    int acumulador=0;
    float promedio;
    int flag=0;
    int menor;
    char sexobajo;
    int nota18=0;
    int edadjoven;
    char sexojoven;
    int edadf;
    int notaf;

    for(int i=0;i<5;i++)
    {
        printf("Ingrese nota del alumno: ");
        scanf("%d",&nota);

        while(!(nota>=1&&nota<=10))
        {
            printf("Error. Reingrese nota del alumno: ");
            scanf("%d",&nota);
        }

        printf("Ingrese edad del alumno: ");
        scanf("%d",&edad);

        printf("Ingrese sexo del alumno: ");
        scanf("%c",&sexo);

        while(!(sexo=='f' || sexo=='m'))
        {
            printf("Error. Reingrese sexo del alumno: ");
            scanf("%c",&sexo);
        }

        fflush(stdin);

        acumulador=acumulador+nota;

        if(nota<menor||flag==0)
        {
            menor=nota;
            sexobajo=sexo;
        }

        if(sexo=='m'&&edad>=18&&nota>=6)
        {
            nota18++;
        }

        if(edad<edadjoven||flag==0)
        {
            edadjoven=edad;
            sexojoven=sexo;
        }

        if(sexo=='f' && flag==0)
        {
            edadf=edad;
            notaf=nota;
            flag=1;
        }

    }

    promedio=(float)acumulador/5;

    printf("El promedio de las notas fue %f \n",promedio);
    printf("La nota mas baja fue %d y el sexo %c \n",menor,sexobajo);
    printf("La cantidad de varones +18, nota>=6: %d \n",nota18);
    printf("El sexo %c y la nota %d del más joven \n",sexojoven,edadjoven);
    printf("La edad %d y la nota %d de la primera mujer ingresada",edadf,notaf);
    return 0;
}
