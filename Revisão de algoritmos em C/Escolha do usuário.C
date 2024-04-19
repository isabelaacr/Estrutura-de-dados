/******************************************************************************

(16) Escreva um programa que receba dois numeros e execute uma das operacoes
listadas a seguir, de acordo com a escolha do usuario. Se for digitada um opcao
invalida mostrar mensagem de erro e terminar a execucao do algoritmo. As
opcoes sao: 1. Media entre dois numeros, 2. Diferenca entre dois numeros, 3.
O produto entre dois numeros;

*******************************************************************************/
#include <stdio.h>

int main() {
    int opcao;
    float num1, num2;

    printf("Escolha uma opção (1 - Média, 2 - Diferença, 3 - Produto): ");
    scanf("%d", &opcao);

    printf("Digite dois números: ");
    scanf("%f %f", &num1, &num2);

    switch(opcao) {
        case 1:
            printf("A média é: %.2f\n", (num1 + num2) / 2);
            break;
        case 2:
            printf("A diferença é: %.2f\n", num1 - num2);
            break;
        case 3:
            printf("O produto é: %.2f\n", num1 * num2);
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}
