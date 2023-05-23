#include <stdio.h>
#include <stdlib.h>


int fatorial (int valor)
   {
    if (valor <= 1) return 1;
    return (valor * fatorial(valor-1));
   }

int main()
{
    int fat, n, i;
    printf ("Digite um numero inteiro  ");
    scanf ("%d",&n);
    if (n < 0)
       {
         printf ("Número menor que zero, não admite fatorial");
         return 1;
       }
    fat = fatorial(n);

    printf("\n Fatorial de %d = %d",n,fat,"\n");
    return 0;
}
