//Receber três números como parâmetros de entrada e imprimir como saída o maior número recebido

#include <stdio.h>

int main ( )
{
    int a, b, c;
    
    printf ("Digite tres numeros: ");
    scanf ("%d %d %d", &a, &b, &c);
    
    if (a > b && a > c)
    printf ("Maior numero recebido: %d", a);
    
        if (b > a && b > c)
    printf ("Maior numero recebido: %d", b);
    
       if (c > a && c > b)
    printf ("Maior numero recebido: %d", c);
    
    return 0;
}
