# Estrutura-de-dados
Revisão de estrutura de dados em linguagem C

## Busca
### Algoritmo genérico de ordenação
``` C
// Protótipo da função qsort:

void qsort (void *v, int n, int tam, int (*cmp) (const void*, const void*));

/* Parâmetros de entrada:

v: ponteiro para o primeiro elemento que se deseja ordenar.
n: número de elementos do vetor;
tam: tamanho em bytes de cada vetor
cmp: ponteiro para a função responsável por comparar dois elementos do vetor. */
```

## Fatorial
Implementação do fatorial em forma recursiva
```C
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
```

## Grafos

Um grafo é um modelo matemático que representa as relações entre objetos de um determinado conjunto.

#### Um grafo G(V,A) é definido por dois conjuntos:
– Conjunto V de vértices (não vazio)
● Itens representados em um grafo;
– Conjunto A de arestas
● Utilizadas para conectar pares de vértices, usando um critério previamente estabelecido.

#### Vértice é cada um dos itens representados no grafo.
– O seu significado depende da natureza do problema modelado
– Pessoas, uma tarefa em um projeto, lugares em um mapa, etc.

#### Aresta (ou arco) liga dois vértices
 Diz qual a relação entre eles
 Dois vértices são adjacentes se existir uma aresta ligando eles.
 Pessoas (parentesco entre elas ou amizade), tarefas de um projeto (pré-requisito entre as tarefas), lugares de um mapa (estradas que existem ligando os lugares), etc
 As arestas podem ou não ter direção
 Existe um orientação quanto ao sentido da aresta
 Em um grafo direcionado ou digrafo, se uma aresta liga os vértices A a B, isso significa que podemos ir de A para B, mas não o contrário

#### Grau
 Indica o número de arestas que conectam um vértice do grafo a outros vértices
 número de vizinhos que aquele vértice possui no grafo (que chegam ou partem dele)
 No caso dos dígrafos, temos dois tipos de grau:
 grau de entrada: número de arestas que chegam ao vértice;
 grau de saída: número de arestas que partem do vértice.

#### Laço
 Uma aresta é chamada de laço se seu vértice de partida é o mesmo que o de chegada
 A aresta conecta o vértice a ele mesmo

#### Caminho
 Um caminho entre dois vértices é uma sequência de vértices onde cada vértice está conectado ao vértice seguinte por meio de uma aresta.

#### Ciclo
 Caminho onde o vértice inicial e o final são o mesmo vértice.
 Note que um ciclo é um caminho fechado sem vértices repetidos (somente o nó origem abre e fecha o ciclo).


### Como representar um grafo no computador?

#### Matriz de Adjacência
A medida que o número de arestas cresce e não havendo nenhuma outra informação associada a aresta (por exemplo, seu peso),
o uso de uma matriz de adjacência se torna mais eficiente
 Utiliza uma matriz N x N para armazenar o grafo, onde N é o número de vértices
 Alto custo computacional, O(N2)
 Uma aresta é representada por uma marca na posição (i , j) da matriz
 Aresta liga o vértice i ao j

#### Lista de Adjacência
Lista de adjacência é mais indicada para um grafo que possui muitos vértices mas poucas arestas ligando esses vértices.
 Utiliza uma lista de vértices para descrever as relações entre os vértices.
 Um grafo contendo N vértices utiliza um array de ponteiros de tamanho N para armazenar os vértices do grafo
 Para cada vértice é criada uma lista de arestas, onde cada posição da lista armazena o índice do vértice a qual aquele vértice se conecta


## Listas

## Pilhas e filas

## Ponteiro

## Recursão

## Vetores

## Árvores binárias
