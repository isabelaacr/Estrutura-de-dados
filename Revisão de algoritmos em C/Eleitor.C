/******************************************************************************
 * 
(17) Escreva um programa que a partir da idade informada de uma pessoa, faca
um algoritmo que informe a sua classe eleitoral, sabendo que menores de 16 anos
nao votam (nao votante), que o voto e obrigatorio para adultos entre 18 e 65
anos (eleitor obrigat´orio) e que o voto e opcional para eleitores entre 16 e 18
anos, ou maiores de 65 anos (eleitor facultativo);

*******************************************************************************/
#include <stdio.h>

int main()
{
    int idade;
    
    printf("Escreva a sua idade:");
    scanf("%d", &idade);
    
    if (idade < 16) {
        printf ("Nao votante");
    }
        
    else if ((idade >= 16 && idade < 18) || idade >= 65) {
        printf ("Eleitor facultativo");
    }
    
    else if (idade >= 18 && idade < 65) {
        printf ("Eleitor obrigatorio");
    }
    
    return 0;
}
