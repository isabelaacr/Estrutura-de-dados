/******************************************************************************
(4) Escreva um programa que receba quatro numeros inteiros, calcule e mostre
a soma destes numeros;
*******************************************************************************/
#include <stdio.h>

int main()
{
    int x,y, soma;
   
    printf("Escreva dois numeros: ");
    scanf("%d %d", &x, &y);
    soma = x+y;
    
    
    printf ("A soma eh: %d\n", soma);

    return 0;
}
