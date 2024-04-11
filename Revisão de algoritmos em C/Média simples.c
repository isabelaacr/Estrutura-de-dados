/******************************************************************************
(3) Escreva um programa que receba tres notas (reais), calcule e mostre a media
aritmetica entre elas;
*******************************************************************************/
#include <stdio.h>

int main()
{
    float x,y, z, media;
   
    printf("Escreva três notas: ");
    scanf("%f %f %f", &x, &y, &z);
    media = (x+y+z)/3;
    
    
    printf ("A media eh: %g\n", media);

    return 0;
}
