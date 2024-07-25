/******************************************************************************

Escreva um programa em C que receba um número inteiro positivo e maior que zero 
e que imprima "primo" se o número for primo, e "negativo" caso o número não seja primo. 
Pela definição, um número primo é aquele que possui somente dois divisores: 1 e ele mesmo.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {

    if (n <= 1) return false;

    if (n == 2) return true;
    
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int x;

    scanf("%d", &x);

    if (x <= 0) {
        return 1; // Sai do programa com um código de erro
    }

    if (is_prime(x)) {
        printf("primo\n");
    } else {
        printf("negativo\n");
    }

    return 0;
}
