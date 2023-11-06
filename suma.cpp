#include <stdio.h>
#include <math.h>
#include <iostream>

int altura,i,j,k;
char c;

void main() // Funcion principal
{
    j=720;
    //c=(char)(j);
    //printf("Valor de c:", c);
    //k = (int)(10);
    //k = 1.5;
    //k = (char)(1.5);
    printf("\nAltura: ");
    scanf("&i",&altura);
    printf("\nfor:\n");
    for (i = 1; i <= altura; i++)
    {
        for (j = 250; j < 250+i; j++)
        {
            if (j%2==0)
                printf("-");
            else
                printf("+");
        }
        printf("\n");
    }
    printf("\nwhile:\n");
    i = 1;
    while (i <= altura)
    {
        j = 250;
        while (j < 250+i)
        {
            if (j%2==0)
                printf("-");
            else
                printf("+");
            j++;
        }
        i++;
        printf("\n");
    }
    printf("\ndo:\n");
    i = 1;
    do
    {
        j = 250;
        do
        {
            if (j%2==0)
                printf("-");
            else
                printf("+");
            j++;
        } while (j < 250+i);
        i++;
        printf("\n");
    } while (i <= altura);

}
