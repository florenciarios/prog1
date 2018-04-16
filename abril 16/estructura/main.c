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
void mostrarEmpleados(eEmpleado[], int);
void ordenarEmpleados(eEmpleado[], int);

int main()
{
    eEmpleado plantel[] = {{"Juan",1111,1000.75,'m'},{"Ana",2222,20000,'f'},{"Roberto",3333,30000,'m'}};

    mostrarEmpleados(plantel,3);

    ordenarEmpleados(plantel,3);

    printf("ORDENADO \n\n");
    mostrarEmpleados(plantel,3);

    return 0;
}

void mostrarEmpleado(eEmpleado emp)
{
    printf("Nombre: %s \n",emp.nombre);
    printf("Legajo: %d \n",emp.legajo);
    printf("Sueldo: %.2f \n",emp.sueldo);
    printf("Sexo: %c \n\n",emp.sexo);
}

void mostrarEmpleados(eEmpleado vec[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        mostrarEmpleado(vec[i]);
    }
}

void ordenarEmpleados(eEmpleado vec[], int tam)
{
    eEmpleado aux;
    int i,j;

    for(i=0;i<tam-1;i++)
    {
        for(j=i+1;j<tam;j++)
        {
            if(strcmp(vec[i].nombre,vec[j].nombre)>0)
            {
                aux=vec[i];
                vec[i]=vec[j];
                vec[j]=aux;
            }
        }
    }
}
