#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

    //pedir datos
    int nota;
    int edad;
    char sexo;

    //A: promedio notas
    int acumulador=0;
    float promedio;

    //B: nota mas baja y sexo
    int flag=0;
    int menor;
    char sexobajo;

    //C: cantidad de varones +18, nota>=6
    int nota18=0;

    //D: sexo y la nota del más joven
    int edadjoven;
    char sexojoven;
    int notajoven;

    //E: edad y la nota de la primera mujer ingresada o informar si no hubo ninguna mujer
    int edadf;
    int notaf;
    int contm=0;

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

        while(edad<=0)
        {
            printf("Error. Reingrese edad del alumno: ");
            scanf("%d",&edad);
        }

        printf("Ingrese sexo del alumno: ");
        fflush(stdin);
        scanf("%c",&sexo);
        sexo=tolower(sexo);

        while(!(sexo=='f' || sexo=='m'))
        {
            printf("Error. Reingrese sexo del alumno: ");
            fflush(stdin);
            scanf("%c",&sexo);
            sexo=tolower(sexo);
        }

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
            notajoven=nota;
            sexojoven=sexo;
            flag=1;
        }

        if(sexo=='f' && contm==0)
        {
            edadf=edad;
            notaf=nota;
            contm++;
        }

    }

    promedio=(float)acumulador/5;

    printf("El promedio de las notas fue %f \n",promedio);
    printf("La nota mas baja fue %d y el sexo %c \n",menor,sexobajo);
    printf("La cantidad de varones +18, nota>=6: %d \n",nota18);
    printf("El sexo %c y la nota %d del mas joven \n",sexojoven,notajoven);

    if(contm>=1)
        {
            printf("La edad %d y la nota %d de la primera mujer ingresada",edadf,notaf);
        }
    else if(contm==0)
        {
            printf("No se ingreso ninguna mujer");
        }

    return 0;
}
