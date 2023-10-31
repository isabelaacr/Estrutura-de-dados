//  A única mudança é que na definição do conteúdo de cada nó da lista devemos definir a informação a ser armazenada.
//  Até aqui os nós representavam um número inteiro.
//  Veremos como incluir uma estrutura em cada nó da lista e algumas funções que demonstram como tratar esse tipo de informação.

//  Inicialmente criamos a estrutura Retangulo

typedef struct retangulo {
  float b;
  float h;
} Retangulo;

 Para inserir no início de uma lista simplesmente encadeada, temos que alocar espaço para a
estrutura Retangulo e após para o próprio nó da lista.

//Inserção no inicio: informando a base e a altura
void lst_insere (Lista* l, float b, float h)
{
  Retangulo* r = (Retangulo*) malloc (sizeof (Retangulo));
  ListaNo* novo = (ListaNo*) malloc (sizeof (ListaNo));
  r -> b = b;
  r -> h = h;
  novo -> info = r;
  novo -> prox = l -> prim;
  l -> prim = novo;
  }
  
  //função imprime: imprime valores de todos os elementos
  
  void lst_imprime (Lista* l)
  {
  ListaNo* p; //variável auxiliar para percorrer a lista
  for (p = l -> prim; p != NULL; p = p -> prox)
  printf ("base = %f e altura %f\n", p -> info -> b; p -> info -> h);
  }
