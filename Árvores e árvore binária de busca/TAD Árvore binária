*/  Uso de alocação dinâmica
- Para guardar o primeiro nó da árvore utilizamos um ponteiro para ponteiro
- Um ponteiro para ponteiro pode guardar o endereço de um ponteiro
Assim, fica fácil mudar quem é a raiz da árvore (se necessário)

Definição */

#include <stdio.h>
#include <stdlib.h>
#include "arvore_bin.h"

struct arvno {
  char info;
  ArvNo* esq;
  ArvNo* dir;
  };
  
  struct arv {
  ArvNo* raiz;
  };
  
 // Tipo Exportado
 
 typedef struct arvno ArvNo;
 typedef struct arv Arv;
 
 //Criando uma estrutura de árvore binária somente com nó raíz

Arv* arv_cria (ArvNo* r)
{
  Arv* a = (Arv*) malloc (sizeof (Arv));
  a -> raiz = r;
  return a;
  }
  
    Arv* a;
    ArvNo* r;
    a = arv_cria (NULL);
    
//Criar estrutura de Árvore Binária
ArvNo* arv_criano (char c, ArvNo* esq, ArvNo* dir)
{
  ArvNo* p  = (ArvNo*) malloc (sizeof(ArvNo));
  p -> info = c;
  p -> esq = esq;
  p -> dir = dir;
  return p:
  }
  
 //Para imprimir a árvore
 // Estrutura auxiliar para imprimir uma Árvore Binária
 static void imprime (ArvNo* r)
 {
 printf ("<"):
 if (r != NULL)
 {
  printf ("%c ", r -> info);
    imprime (r -> esq);
    imprime (r -> dir);
    }
   printf (">");
   }
   
   void arv_imprime (Arv*a)
   {
    imprime (a -> raiz);
    }
 
  // Liberando a árvore: Uso de duas funções - uma percorre e libera os nós e a outra trata a raíz
  static void libera (ArvNo* r)
  {
  if (r != NULL)
  {
  libera (r -> esq);
  libera (r -> dir);
  free (r);
  }
  }
  void arv_libera (Arv*a)
  {
  libera (a -> raiz);
  free (a);
  }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
  
  
  
