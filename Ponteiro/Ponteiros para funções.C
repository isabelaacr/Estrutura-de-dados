#include <stdio.h>

somaprod (int a, int b, int *p, int *q) //recebe endereço das váriaveis da função main e altera os valores imediatamente
{
    *p = a + b;
    *q = a * b;
}

int main()
{
    int s, p;
    somaprod (3,5, &s, &p);
    printf("Soma =  %d  Produto = %d\n", s, p);
    return 0;
}
