/******************************************************************************

(5) Escreva uma funcao que receba tres numeros inteiros e retorne o maior deles.
 Utilize o seguinte prototipo: int maior de tres(int, int, int);

*******************************************************************************/

#include <stdio.h>

    int maior_de_tres(int a, int b, int c) {
    
    if (a > b && a > c)
return a;

        if (b > a && b > c)
return b;
    
       if (c > a && c > b)
return c;

return -1;
}
    int main() {

    int a, b, c;
    
    printf ("Digite tres numeros: ");
    scanf ("%d %d %d", &a, &b, &c);
    
  int maior = maior_de_tres(a, b, c);
    if (maior != -1) {
        printf("Maior numero recebido: %d\n", maior);
    } else {
        printf("Erro: os tres numeros sao iguais.\n");
    }
      
    return 0;
}
