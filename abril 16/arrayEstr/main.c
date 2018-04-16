#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nombre[20];
    int legajo;
    float sueldo;
    char sexo;

}eEmpleado;

void mostrarEmpleado(eEmpleado);

int main()
{
    eEmpleado unEmpleado = {"Juan",1111,1000.75,'m'};

    eEmpleado otroEmpleado;

    otroEmpleado = unEmpleado;
/*
    unEmpleado.legajo=1234;
    strcpy(unEmpleado.nombre,"Juan");
    unEmpleado.sueldo=50000.50;
    unEmpleado.sexo='m';

    printf("Ingrese nombre: ");
    gets(unEmpleado.nombre);
    printf("Ingrese legajo: ");
    scanf("%d",&unEmpleado.legajo);
    printf("Ingrese sueldo: ");
    scanf("%f",&unEmpleado.sueldo);
    printf("Ingrese sexo: ");
    fflush(stdin);
    scanf("%c",&unEmpleado.sexo);
*/
    mostrarEmpleado(otroEmpleado);

    return 0;
}

void mostrarEmpleado(eEmpleado emp)
{
    printf("Nombre: %s \n",emp.nombre);
    printf("Legajo: %d \n",emp.legajo);
    printf("Sueldo: %.2f \n",emp.sueldo);
    printf("Sexo: %c \n",emp.sexo);
}
