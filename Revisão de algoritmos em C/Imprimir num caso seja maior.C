/******************************************************************************
Escreva um programa que leia um numero e o imprima caso ele seja maior
que 20;
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i;
    printf ("Escreva o numero: \n");
    scanf ("%d", &i);
    printf (i > 20 ? "Maior que 20" : "%d", i); 
    
    return 0;
}

