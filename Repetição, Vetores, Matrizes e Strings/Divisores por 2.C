/******************************************************************************

(11) Escreva uma funcao que recebe um numero inteiro n e retorne a quantidade
de valores entre 2 e n que são divisores de n, tambem no formato inteiro. Utilize
o seguinte prototipo: int divisores de n(int);


*******************************************************************************/


#include <stdio.h>

int divisores(int n) {
    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int numero;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &numero);
    printf("Quantidade de valores entre 2 e %d que são divisores de %d: %d\n", numero, numero, divisores(numero));
    return 0;
}
