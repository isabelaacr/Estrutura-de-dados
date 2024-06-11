/******************************************************************************
(3) Escreva um programa que receba três números e mostre o maior;
*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c;
    printf ("Escreva três numeros: \n");
    scanf ("%d %d %d", &a, &b, &c);
   
   if (a > b && a > c) {
       printf("O maior numero eh: %d\n", a);
   }
       else if (b > a && b > c) {
       printf("O maior numero eh: %d\n", b);
   }
    
    else if (c > a && c > b) {
       printf("O maior numero eh: %d\n", c);
   }
  else {
       printf("Os numeros são iguais");
   }
   
    return 0;
}
