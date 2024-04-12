//(7) Escreva um programa que leia um n´umero e imprima uma das mensagens:
//“maior do que 20”, “igual a 20” ou “menor do que 20”;


#include <stdio.h>

int main() {
    int n1;
    
    printf("Digite um número: ");
    scanf("%d", &n1);
    
    if (n1 > 20) {
        printf("Maior do que 20");
    } else if (n1 < 20) {
        printf("Menor do que 20");
    } else {
        printf("Igual a 20");
    }
    
    return 0;
}
