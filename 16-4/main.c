#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


void mifuncion(char[][20],int);

int main()
{
    char nombres[5][20]= {"jUAN CARLOS","albERtO GabRIEL","anA cLARA","flOr","rOsa"};

    mifuncion(nombres,5);

    return 0;
}

void mifuncion(char vec[][20], int filas)
{
    int i,k;

    for(i=0;i<filas;i++)
    {
        strlwr(vec[i]);

        for(k=0;k<20;k++)
        {
            if(vec[i][k]==' ')
            {
                vec[i][k+1]=toupper(vec[i][k+1]);
            }
        }

        vec[i][0]=toupper(vec[i][0]);
        printf("%s \n",vec[i]);
    }
}
