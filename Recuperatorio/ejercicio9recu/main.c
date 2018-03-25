#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre;
    int peso;
    int temp;
    int pares=0;
    int flag=0;
    int mayor;
    char nompeso;
    int tempeso;
    int menort=0;
    int animales=0;
    int acumpeso=0;
    float promedio;
    char respuesta;

    do
    {
        printf("Ingrese nombre del animal: ");
        scanf("%c",&nombre);

        printf("Ingrese peso del animal: ");
        scanf("%d",&peso);

        while(!(peso>=1&&peso<=1000))
        {
            printf("Error. Reingrese peso del animal: ");
            scanf("%d",&peso);
        }

        printf("Ingrese temperatura del habitat: ");
        scanf("%d",&temp);

        while(!(temp>=-30&&temp<=30))
        {
            printf("Error. Reingrese temperatura del habitat: ");
            scanf("%d",&temp);
        }

        fflush(stdin);

        animales++;

        acumpeso=acumpeso+peso;

        if(temp%2==0)
        {
            pares++;
        }

        if(peso>mayor||flag==0)
        {
            mayor=peso;
            nompeso=nombre;
            tempeso=temp;
        }

        if(temp<0)
        {
            menort++;
        }

        printf("¿Desea ingresar otro animal): ");
        scanf("%c",&respuesta);

    }while(respuesta=='s');

    promedio=(float)acumpeso/animales;

    printf("La cantidad de temperaturas pares es %d \n",pares);
    printf("El nombre %c y temperatura %d del animal más pesado \n",nompeso,tempeso);
    printf("La cantidad de animales que viven a menos de 0 grados %d \n",menort);
    printf("El promedio del peso de todos los animales %f \n",promedio);

    return 0;
}
