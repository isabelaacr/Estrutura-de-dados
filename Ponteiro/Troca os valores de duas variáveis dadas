/******************************************************************************
Troca os valores de duas variáveis dadas. Passamos os endereços das variáveis para a função
****************************************************************************/
#include <stdio.h>

troca (int *px, int *py)
{
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}

int main()
{
    int a = 5, b = 7;
    troca (&a, &b); //passamos os endereços das variáveis
    printf("%d %d\n", a, b);
    return 0;
}
