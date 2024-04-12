#include <stdio.h>

int main() {
    int num1, num2, soma, resultado;

    // Solicita ao usuário para inserir dois números
    printf("Digite dois números: ");
    scanf("%d %d", &num1, &num2);

    soma = num1 + num2; // Calcula a soma dos números

    if (soma > 20) {
        resultado = soma + 8;
        printf("A soma é maior que 20. Adicionando 8, o resultado é: %d\n", resultado);
    } else {
        resultado = soma - 5;
        if (resultado > 20) {
            printf("A soma é menor ou igual a 20, mas após subtrair 5 o resultado é maior que 20.\n");
        } else {
            printf("A soma é menor ou igual a 20. Subtraindo 5, o resultado é: %d\n", resultado);
        }
    }

    return 0;
}
