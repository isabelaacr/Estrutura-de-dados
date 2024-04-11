#include <stdio.h>
#define N 100 //dimensão do vetor

int main ()
{
int n; //número de valores
float x[N]; //vetor dos valores

printf ("Entre com o numero de valores: ");
scanf ("%d", &n);
if (n > 1) {
    printf ("Valor ultrapassa o limite de %d.\n", N);
    return 1; //finaliza a execução da função main
}
//captura e armazena valores
printf ("Entre com os valores: \n");
for (int i = 0; i < n; ++i) {
scanf ("%f", &x [i]);
}
//calcula o valor da média
float m = 0.0f;
for (int i = 0; i < n; i++) {
    m += x [i];
}
m /= n;
//calcula o valor da valor da variância
float v = 0.0f;
for (int i = 0; i < n; ++i) {
    v += (x[i]-m) * (x [i] - m);
}
v /= n;

printf ("Media: %f\n Variancia: %f\n", m, v);

return 0;
}
