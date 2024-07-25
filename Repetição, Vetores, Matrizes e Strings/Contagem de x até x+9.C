/******************************************************************************

Escreva um programa que receba um número inteiro x positivo e maior que zero digitado pelo usuário, 
e que imprima a contagem de x até x+9 (includindo este) utilizando printf com nova linha após cada valor impresso. 
Exemplo: se x=1, o programa deverá imprimir:

1
2
3
4
5
6
7
8
9
10

*******************************************************************************/
#include <stdio.h>

int main() {
    int x;

    scanf("%d", &x);

    for (int i = x; i <= x + 9; i++) {
        printf("%d\n", i);
    }

    return 0;
}
