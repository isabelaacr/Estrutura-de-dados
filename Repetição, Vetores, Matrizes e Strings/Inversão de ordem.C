//Escreva um programa em C que receba do usuário cinco inteiros que deverão ser armazenados em um vetor para cinco elementos na ordem em que foram digitados. O seu programa então deverá percorrer o vetor do final para o início, imprimindo os elementos do vetor, ou seja, deve imprimir na ordem inversa com relação a qual foram digitados. Pule uma linha para cada elemento impresso.

#include <stdio.h>

int main() {
    int vetor[5];  
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }
    
    for (int i = 4; i >= 0; i--) {
        printf("%d\n", vetor[i]);
    }
    
    return 0;
}
