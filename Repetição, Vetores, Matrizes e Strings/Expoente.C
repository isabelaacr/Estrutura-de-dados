/******************************************************************************

(9) Escreva uma funcao que recebe dois numeros inteiros positivos base b e
expoente e. Utilizando somente comandos de repeticao (for/while), a funcao
retorna o valor inteiro b^e. Utilize o seguinte prototipo: int potencia(int,int);


*******************************************************************************/


#include <stdio.h>

int potencia(int base, int expoente) {
    int resultado = 1;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    int base, expoente;
    printf("Digite a base e o expoente:\n");
    scanf("%d %d", &base, &expoente);
    int resultado = potencia(base, expoente);
    printf("Valor inteiro: %d\n", resultado);
    return 0;
}
