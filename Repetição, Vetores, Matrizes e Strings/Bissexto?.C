/******************************************************************************

(6) Escreva uma funcao que leia o ano, no formato inteiro, e retorne se o ano
e bissexto ou nao. Se for bissexto retorna 1, se nao for retorna 0. Utilize o
seguinte prototipo: int ano bissexto(int);

*******************************************************************************/

#include <stdio.h>

    int ano_bissexto(int ano) {
        
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return 1;
    }
    else {
            return 0;
      }
    }

    int main() {
    int ano;
    
    printf ("Digite um ano: \n");
    scanf ("%d", &ano);
    
  int resultado = ano_bissexto(ano);
    if (resultado == 1) {
        printf("O ano eh bissexto");
    } else {
        printf("O ano nao eh bissexto\n");
    }
    return 0;
}
