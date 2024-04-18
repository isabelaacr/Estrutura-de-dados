/******************************************************************************
(3) Escreva um programa que receba tres nuumeros e mostre o maior;
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,c;
    printf ("Escreva dois numeros: \n");
    scanf ("%d %d", &i, &c);
   
   if (i > c) {
       printf("O maior numero eh: %d\n", i);
   }
       else if (c > i) {
       printf("O maior numero eh: %d\n", c);
   }
  else {
       printf("Os numeros são iguais");
   }
   
    return 0;
}

