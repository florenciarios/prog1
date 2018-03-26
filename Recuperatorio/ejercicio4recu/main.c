#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int resultado;

    printf("Ingrese numero: ");
    scanf("%d",&num1);

    printf("Ingrese numero: ");
    scanf("%d",&num2);

    //NO SE CONCATENAR

    if(num1>num2)
    {
        resultado=num1/num2;
        printf("%d",resultado);
    }
    else if(num1==num2)
    {
        printf("%d%d",num1,num2);
    }
    else
    {
        resultado=num1+num2;
        printf("%d \n",resultado);

        if(resultado<50)
        {
            printf("La suma es menor a 50");
        }
    }

    return 0;
}
