/******************************************************************************

(3) Escreva uma funcao que receba como entrada um inteiro representando
o primeiro termo de uma Progressao Aritmetica, um inteiro representando o
numero n de termos, e um inteiro representando a diferenca entre dois numeros
consecutivos. A funcao deve retornar o valor do n-esimo termo desta P.A. no
formato int. Utilize o seguinte prototipo: int nesimo termoPA(int, int, int);


*******************************************************************************/
#include <stdio.h>

    int nesimotermoPA(int a1, int n, int r) {
    int an = a1 + (n - 1)*r;
    return an;
    }
    
    int main() {
    int a1, n, r, resultado;
    
    printf("Digite um inteiro representando o primeiro termo de uma P.A:\n");
    scanf ("%d", &a1);
      
    printf("Digite um inteiro representando o numero n de termos de uma P.A:\n");
    scanf ("%d", &n);
    
    printf("Digite um inteiro representando o representando a diferenca entre dois numeros consecutivos de uma P.A:\n");
    scanf ("%d", &r);

    resultado = nesimotermoPA(a1,n,r);
    printf ("O N-esimo termo eh: %d\n", resultado);
    return 0;
}
