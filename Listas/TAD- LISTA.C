// Tipo Abstrato de Dados (TAD):

// Considerando uma lista que armazene números inteiros, podemos ter uma estrutura para
// representar a lista e outra para representa um nó dessa lista (autoreferenciada).


typedef struct lista Lista;
typedef struct listano ListaNo; // listano = conteúdo da lista / ListaNo = endereço da lista

struct lista {
    ListaNo* prim;
    };
struct listano {
int info;
ListaNo* prox; //apontador autoreferenciado, vai para o endereço que tem conteúdo similar (número inteiro + apontador)
};

// Função de criação: Retorna uma lista sem nenhum elemento

Lista* lst_cria (void) //usar lst para criação de lista, tal como em string (str) e é void pois não recebe argumento e sim deve retorna-lo
{
Lista*l = (Lista*) malloc (sizeof(Lista));

l -> prim = NULL; //conteúdo é nulo pois quero criar a lista vazia
return l; //associo a função a um apontador do tipo lista
}

// Função de inserção: A função mais simples insere um elemento no início da lista. Retorna a lista atualizada

void lst_insere (Lista* l, int v)
{
   ListaNo* novo = (ListaNo*) malloc (sizeof(ListaNo)); //criei o elemento
   novo -> info = v; //inseri contéudo no elemento
   novo -> prox = l -> prim;
   l -> prim = novo; // reorganizo o ponto de ingresso na lista para que seja o primeiro elemento que inseri
}

  int main (void)
{
  Lista*l;
  l = lst_cria ( );
  lst_insere (l, 23); 
  lst_insere (l, 45);
...
  return 0;
}

*/ Exemplo:
l = 100
l -> prim = NULL

novo = 120 //apontador
novo -> v = 23
novo -> prox = l -> prim
l -> prim = novo

novo = 200
novo -> v = 45
novo -> prox = l -> prim
l -> prim = novo

/*

*/ Função de percorre a lista:
– Uso para mostrar na tela todos os elementos da lista
– Não permite acesso randômico como nos vetores
/*

void lst_imprime (Lista* l)
{
  ListaNo* p; //variável auxiliar para percorrer a lista
  for ( p = l -> prim; p != NULL; p = p -> prox)
  printf ("info = %d\n", p -> info);
  }
  
// Função que verifica se determinado elemento pertence a lista: Retorna 1, se o elemento pertence a lista e 0, caso contrário

int lst_busca (Lista* l, int v)
{
  ListaNo* p;
  for (p = l -> prim; p != NULL; p = p -> prox)
{
  if (v == p -> info) return 1;
}
  return 0; // naõ encontrou o elemento
}

// Manutenção da lista ordenada: Caso desejemos manter uma lista com uma determinada ordenação,
necessitamos encontrar a posição correta da inserção, para depois efetivá-la

// Se for o primeiro elemento recai na inserção no início da lista, caso contrário se insere após o anterior.

// Insere elementos em ordem crescente

void lst_insere_ordenado (Lista* l, int v) {
   ListaNo* ant = NULL; //ponteiro para o elemento anterior
   ListaNo* p = l -> prim; // ponteiro para percorrer a lista
   ListaNo* novo = (ListaNo*) malloc (sizeof (ListaNo));
   novo -> info = v;
   
// Localiza o ponto de inserção
while (p != NULL && p -> info < v) {
 ant = p;
 p = p -> prox;
 }
 
 //Encadeia o elemento
 if (ant == NULL) { //insere elemento do inicio
  novo -> prox = l -> prim;
  l -> prim = novo;
}

else { //insere elemento do meio da lista
novo -> prox = ant -> prox;
ant -> prox = novo;
  }
}
 
 
// Função que retira um elemento da lista: se for um elemento no meio da lista (pode ser o último.

void lst_retira (Lista* l, int v) {
   ListaNo* ant = NULL; //ponteiro para o elemento anterior
   ListaNo* p = l -> prim; // ponteiro para percorrer a lista
   
// Procura elemento na lista, guardando anterior
while (p != NULL && p -> info != v) {
 ant = p;
 p = p -> prox;
 }
 
 //Verifica se achou o elemento
 if (p == NULL) return; // não achou: lista original não se altera
  //retira elemento
  if (ant == NULL) {
  l -> prim = novo;
}

else { //retira elemento do meio da lista
ant -> prox = p -> prox;
  }
  free (p);
}


// Função que verifica se a lista está vazia e libera a memória ocupada

int lst_vazia (Lista* l, int v) 
{
 if (p == NULL) 
  return 1;
 else
  return 0;
}
void lst_libera (Lista* l)
{
    ListaNo* p = l -> prim; // ponteiro para percorrer a lista
   while (p != NULL) {
    ListaNo* t = p -> prox; // guarda referência para o próximo elemento
free (p); //libera a memória apontada por p
  p = t; // faz p apontar para o próximo
}
free (l);
}

