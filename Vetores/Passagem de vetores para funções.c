 //Passar um vetor para uma função consiste em passar o endereço da primeira posição do vetor.
 //Se passamos um endereço, a função chamada deve ter um parâmetro do tipo ponteiro para armazenar este valor.
 //Assim, se passarmos uma função de vetor int, deve ter o parâmetro de tipo *int
 
 Exemplo:
 //Calcular a média e função para calcular a variância
 
 #include <stdio.h>
 #include <stdlib.h>
 
 #define N 100  
 // define a dimensão do vetor (tamanho máximo)
 
 void captura (int n, float* x)  //define a função captura que recebe os parâmetros: n e um ponteiro para x, representando onde os valores serão armazenados
 {
 printf ("Entre com o valor do vetor: \n");
 for (int i = 0; i < n; ++i) //Inicializa i com zero, impõe a condição de que seja menor que n e que vá incrementando o i (i<-i+1)
 scanf ("%f", &x[i]); //recebe o valor float e armazena no vetor &x[i]
 }
 
 float media (int n, float* x) //define a função média, onde recebe dois parâmetros
 {
 float m = 0.0f; //inicializa a variável m com 0
 for (int i = 0; i < n; ++i)
 m += x [i]; //acumulador de valores do vetor "x" na variável m
 return m/n; //retorna a média dos valores no vetor "x"
 }
 
 float variancia (int n, float* x, float m) //define a função variância, onde receberá três parâmetros
//n: número de valores no vetor;
//x: ponteiro para float 
//m: média dos valores
 {
 float v = 0.0f; //inicializa v com 0
 for (int i = 0; i < n; ++i) //itera sobre todos os elementos do vetor "x"
 v += (x[i] - m) * (x[i]-m); //calcula a soma dos quadrados das diferenças entre cada vetor x e a média m
 return v/n; //retorna a variância dos valores no vetor "x"
 }
 int main () {
 int n; //número de valores 
 float x [N]; // vetor dos valores
 
 // lê número de valores
 printf ("Entre com o numero de valores: ");
 scanf ("%d", &n);
 if (n > N) { //Verifica se o número de valores inseridos é maior do que o tamanho másimo do vetor x[]
 printf ("Valor ultrapassa o limite de %d.\n", N);
 return 1; 
 }
 captura (n,x); //chama a função captura para os valores inseridos pelo usuário e armazená-los no vetor x[]
 float m = media (n,x); //calcula a média dos valores no vetor
 float v = variancia (n,x,m); //calcula a variância dos valores no vetor e armazena o resultado na variável v
 printf ("Media: %f\n Variancia: %f\n", m, v); 
 return 0;
 }
 
