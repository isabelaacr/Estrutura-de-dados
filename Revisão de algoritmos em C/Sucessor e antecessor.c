/******************************************************************************
(1) Escreva um programa que leia um inteiro e exiba seu sucessor e seu antecessor;
*******************************************************************************/
#include <stdio.h>

int main()
{
    int x,suc,ant;
   
    printf("Escreva um número: ");
    scanf("%i", &x);
    ant = x-1;
    suc = x+1;
    
    
    printf ("O antecessor eh: %d\n", ant);
    printf ("O sucessor eh: %d\n", suc);
    return 0;
}
