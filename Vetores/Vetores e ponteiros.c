int v [10]; //v representa um endereço de memória
... // se quisermos armazenar o valor de v em outra variável, esta deve ser declarada como ponteiro
int *u = v; //armazenam o endereço inicial do vetor, portanto, é possível acessar os elementos de v via variável u
// a diferença de v e u é que v é constante e u é variável
//não podemos atribuir outro valor a v, apenas a u
u [0] = 4;
u [1] = v [0] + 2; //v [0] armazena 4

exemplo:
int v [10];
...
int *u = v; // u aponta para o primeiro elemento de v
u [0] = 4; //primeiro elemento de v é alterado
u = &v [1]; //u aponta para o segundo elemento de v 
//escrever u = &v [0] é similar a escrever *v = 4 já que v é o ponteiro para o primeiro elemento
u [0] = v [0] + 5; //segundo elemento de v é alterado

Aritmética de ponteiros:
Exemplo:

p aponta para um inteiro dentro da área reservada do vetor
p + 1 representa um ponteiro para o próximo valor armazenado na memória, ou seja, o valor de p é incrementado de 4 (um inteiro possui 4 bytes)

v + 0 => aponta para o primeiro elemento vetor
v + 1 => aponta para o segundo elemento do vetor
v + 2 => aponta para o terceiro elemento do vetor
...
v + 9 => aponta para o décimo elemento do vetor

Escrever &v[i] é equivalente a escrever (v+i)
Escrever v[i] é equivalente a escrever *(v+i)
