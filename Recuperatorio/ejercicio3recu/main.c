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

    desc=(float)des/100*precio;

    preciodesc=precio-desc;

    iva=21/100*(float)precio;

    total=preciodesc-iva;

    printf("El descuento es &d",des);
    printf("El precio con el descuento es %f",desc);
    printf("El iva es %f",iva);
    printf("El precio con descuento más el IVA es %f",total);
    return 0;
}
