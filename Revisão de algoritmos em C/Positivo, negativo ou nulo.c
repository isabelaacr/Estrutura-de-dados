/******************************************************************************
(5) Escreva um programa que leia um numero inteiro e imprimir se ele e positivo,
negativo ou nulo;
*******************************************************************************/

#include <stdio.h>

int main()
{
    float i;
    printf ("Escreva um numero: \n");
    scanf ("%f", &i);
   
   if (i>0) { 
       printf("positivo");
   }
       else if (i<0){
       printf("eh negativo");
   }
   else {
       printf("eh nulo");
   }
    return 0;
}

