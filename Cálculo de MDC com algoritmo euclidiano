// Implemente uma função interativa para calcular o máximo divisor comum (MDC) de dois números positivos usando o algoritmo de Euclides.
// Este algoritmo é baseado no fato de que se o resto da divisâo de x por y, representado por r, for igual a zero, y é o MDC.
// Se o resto for diferente de zero, o MDC de x e y é igual ao MDC de y e r. O processo se repete até que o valor do resto da divisão seja zero.

#include <stdio.h>
#include <stdlib.h>

  int mdc(int x, int y) {
  int r;  
 
  do {
  r = x % y;
  x = y;
  y = r;
  } while (r != 0);
  
  return x;
 }
    
  int main () {
        int n1, n2;
        
printf ("Digite dois numeros para calcular o MDC");
scanf ("%d %d", &n1, &n2);
  
  int resultado = mdc (n1,n2);
  
printf ("O mdc e %d e %d é: %d\n", n1,n2, resultado);
  return 0;
  }
 
