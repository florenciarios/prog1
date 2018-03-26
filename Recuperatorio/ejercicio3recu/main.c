#include <stdio.h>
#include <stdlib.h>

int main()
{
    int precio;
    int des;
    float desc;
    float iva;
    float total;
    float preciodesc;

    printf("Ingrese precio: ");
    scanf("%d",&precio);

    printf("Ingrese descuento: ");
    scanf("%d",&des);

    fflush(stdin);

    desc=(float)des/100*precio;

    preciodesc=precio-desc;

    iva=(float)21/100*precio;

    total=preciodesc-iva;

    printf("El descuento es %d \n",des);
    printf("El precio con el descuento es %.2f \n",preciodesc);
    printf("El iva es %.2f \n",iva);
    printf("El precio con descuento mas el IVA es %.2f",total);
    return 0;
}
