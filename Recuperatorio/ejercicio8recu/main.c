#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre;
    int paginas;
    int ventas;
    char tema;
    int pares=0;
    int impares=0;
    int vendernada=0;
    int acumventas=0;
    int libros=0;
    int pagsprog=0;
    float promedio;
    char respuesta;

    do
    {
        printf("Ingrese nombre del libro: ");
        fflush(stdin);
        scanf("%c",&nombre);

        printf("Ingrese numeros de paginas del libro: ");
        scanf("%d",&paginas);

        printf("Ingrese ventas del libro: ");
        scanf("%d",&ventas);

        printf("Ingrese tema del libro: ");
        fflush(stdin);
        scanf("%c",&tema);

        libros++;

        if(paginas%2==0)
        {
            pares++;
        }
        else
        {
            impares++;
        }

        if(ventas==0)
        {
            vendernada++;
        }
        else
        {
            acumventas=acumventas+ventas;
        }

        if(tema=='p')
        {
            pagsprog=pagsprog+paginas;
        }

        printf("Desea ingresar otro libro?: ");
        fflush(stdin);
        scanf("%c",&respuesta);

    }while(respuesta=='s');

    promedio=(float)acumventas/libros;

    printf("La cantidad de libros con paginas pares %d \n",pares);
    printf("La cantidad de libros con paginas impares %d \n",impares);
    printf("La cantidad de ceros ventas %d \n",vendernada);
    printf("El promedio de todas las ventas ingresadas %2.f \n",promedio);
    printf("La suma de todas las paginas de los de programacion %d \n",pagsprog);
    return 0;
}
