#include <stdio.h>
#include <stdlib.h>

int produtorio () {
    int i, produt = 1;
    for (i = 2; i <= 10; i++) produt *= i;
    return produt;
}
int produtoriow () {
    int i, produt = 1;
    i = 2;
    while (i <= 10) {
        produt *= i;
        i++;
    }
    return produt;
}
int main ()
{
    int prod;
    prod = produtorio ();
    printf ("Produtorio de 1 a 10 (for) = %d\n", prod);
    prod = produtoriow ();
    printf ("Produtorio de 1 a 10 (while) = %d\n", prod);
    return 0;
}
    
