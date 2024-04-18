/******************************************************************************
(4) Escreva um programa que leia um numero inteiro e imprimir se ele é par ou ımpar;
*******************************************************************************/

#include <stdio.h>

int main()
{
    int i;
    printf ("Escreva um numero: \n");
    scanf ("%d", &i);
   
   if (i%2==0) { 
       printf("eh par);
   }
       else {
       printf("eh impar");
   }
    return 0;
}

