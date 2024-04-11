 Passar um vetor para uma função consiste em passar o endereço da primeira posição do vetor.
 Se passamos um endereço, a função chamada deve ter um parâmetro do tipo ponteiro para armazenar este valor.
 Assim, se passarmos uma função de vetor int, deve ter o parâmetro de tipo *int
 
 Exemplo:
 //Calcular a média e função para calcular a variância
 
 #include <stdio.h>
 #include <stdlib.h>
 
 #define N 100 //dimensão do vetor
 
 void captura (int n, float* x) 
 {
 printf ("Entre com os valores: \n");
 for (int i = 0; i < n; ++i)
 scanf ("%f", &x[i]);
 }
 
 float media (int n, float* x)
 {
 float m = 0.0f;
 for (int i = 0; i < n; ++i)
 m += x [i];
 return m/n;
 }
 
 float variancia (int n, float* x, float m)
 {
 float v = 0.0f;
 for (int i = 0; i < n; ++i)
 v += (x [i] - m) * (x[i]-m);
 return v/n;
 }
 int main () {
 int n; //número de valores 
 float x [N]; // vetor dos valores
 
 // lê número de valores
 printf ("Entre com o numero de valores: ");
 scanf ("%d", &n);
 if (n > N) {
 printf ("Valor ultrapassa o limite de %d.\n", N);
 return 1; 
 }
 captura (n,x);
 float m = media (n,x);
 float v = variancia (n,x,m);
 printf ("Media: %f\n Variancia: %f\n", m, v);
 return 0;
 }
 
