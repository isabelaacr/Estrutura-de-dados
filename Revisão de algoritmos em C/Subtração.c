/******************************************************************************
(2) Escreva um programa que receba dois numeros inteiros, calcule e mostre a
subtracao do primeiro pelo segundo;
*******************************************************************************/
#include <stdio.h>

int main()
{
    int x,y,sub;
   
    printf("Escreva dois numeros: ");
    scanf("%d %d", &x, &y);
    sub = x-y;
    
    printf ("A subtracao do primeiro pelo segundo: %d\n", sub);

    return 0;
}
