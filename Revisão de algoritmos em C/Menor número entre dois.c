/******************************************************************************
(2) Escreva um programa que receba dois numeros e mostre o menor;
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,c;
    printf ("Escreva dois numeros: \n");
    scanf ("%d %d", &i, &c);
   
   if (i > c) {
       printf("O menor numero eh: %d\n", c);
   }
       else if (i < c) {
       printf("O menor numero eh: %d\n", i);
   }
  else {
       printf("Os numeros são iguais");
   }
   
    return 0;
}

