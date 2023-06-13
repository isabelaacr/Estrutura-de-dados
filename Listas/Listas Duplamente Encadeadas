 Cada elemento da lista tem um apontador para o seu sucessor e para seu antecessor.
 Com isso consigo acessar tanto o elemento imediatamente anterior quanto o imediatamento posterior da lista.

typedef struct lista2 Lista2;
typedef struct listano2 ListaNo2;

struct lista2 {
  ListaNo2* prim;
   ListaNo2* ult;
   };

struct listano2 {
 int info;
 ListaNo2* ant;
 ListaNo2* prox;
 }; 
 
  Função de criação:
 Retorna uma lista sem nenhum elemento

Lista2* lst2_cria (void)
{
Lista2* l = (Lista2*) malloc (sizeof (Lista2));
l -> prim = NULL;
l -> ult = NULL;
return l;
}

*/ Primeiro crio lugar para colocar os elementos, segundo coloco os elementos, terceiro reorganizo os apontadores; prim = depois
ant = anterior. Se a lista tá vazia o anterior vai apontar para NULL, vai apontar para o primeiro elemento da lista.
Se o primeiro e o último elemento estão vazios, a lista tá vazia.
Se eu tiro o último elemento, deve apontar para o primeiro elemento da lista.
/*

 Função de inserção, no início da lista.

void lst2_insere_inicio (Lista2* l, int v)
{
  ListaNo2* novo = (ListaNo2*) malloc (sizeof (ListaNo2));
  novo -> info = v;
  novo -> prox = l -> prim;
  novo -> ant = NULL;
  if (l -> prim != NULL) // testa se a lista tá vazia
      l prim -> ant = novo; // o novo é o anterior do antigo primeiro
  else 
      l -> ult = novo; // novo também é o último
      l -> prim = novo;
      }
  
 Função de inserção, no final da lista.

void lst2_insere_final (Lista2* l, int v)
{
  ListaNo2* novo = (ListaNo2*) malloc (sizeof (ListaNo2));
  novo -> info = v;
  novo -> ant = l -> ult;
  novo -> prox = NULL;
  if (l -> prim != NULL) // testa se a lista tá vazia
      l ult -> prox = novo; // o novo é o anterior do antigo último
  else 
      l -> prim = novo; // novo também é o primeiro
      l -> ult = novo; // novo é o último
      }












