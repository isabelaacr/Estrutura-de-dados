#include <stdio.h>

int eh_par(int numero) {
    return numero % 2 == 0;
}

int validar(int numero) {
    return numero > 0;
}

int main() {
    int n1;

    printf("Digite um número inteiro maior do que zero: ");
    scanf("%d", &n1);

    if (validar(n1)) {
        if (eh_par(n1)) {
            printf("O número eh par!\n");
        } else {
            printf("O número eh ímpar!\n");
        }
    } else {
        printf("Número inválido.\n");
    }

    return 0;
}
