//Escreva um programa em C que receba nove números inteiros digitados pelo usuário, sendo que esses números devem ser então armazenados em uma matriz de três linha e três colunas. Por exemplo, o primeiro número digitado será o primeiro elemento da primeira linha da matriz, o quarto número será o primeiro elemento da segunda linha da matriz e o nono número será o último número da última linha da matriz, e assim por diante. Seu programa deve então imprimir "diagonal" caso a matriz construída dessa forma seja identificada como sendo uma matriz diagonal, e "negativo" caso contrário. Uma matriz diagonal é aquela em que os elementos fora da diagonal principal são todos zero. Dica: um elemento da diagonal principal é aquele em que o índice da linha é igual ao índice da coluna.

#include <stdio.h>
#include <stdbool.h>

bool is_diagonal(int matriz[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i != j && matriz[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int matriz[3][3];

    printf("Digite 9 números inteiros:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    if (is_diagonal(matriz)) {
        printf("diagonal\n");
    } else {
        printf("negativo\n");
    }

    return 0;
}
