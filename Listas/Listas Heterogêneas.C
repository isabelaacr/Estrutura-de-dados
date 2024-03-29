// Uma vez que a informação pode ser representada por um ponteiro, posso armazenar diferentes informações utilizando a mesma estrutura de nós.
// – Por exemplo, imagine manipulando dados de diferentes objetos geométricos para os quais desejamos saber a área. Por questões de simplicidade, trataremos apenas 
// com Retângulos, Triângulos e Círculos, cujas áreas podem ser calculadas como:

Aret = b.h, Atri = b.h/2, Acirc = πr^2

//  Definimos um tipo para cada objeto e um identificador para o tipo de estrutura que será utilizada.


#define PI 3.14159

typedef enum tipo Tipo;

enum tipo {
  RET,
  TRI, 
  CIRC
};

typedef struct retangulo {
float b;
float h;
} Retangulo;

typedef struct triangulo {
float b;
float h;
} Triangulo;

typedef struct circulo {
float r;
} Circulo;


//  O nó da lista deve ser composto por 3 campos.
// – Um identificador de qual objeto está armazenado no nó.
// – Um ponteiro para a estrutura que contém a informação.
// – Um ponteiro para o próximo elemento da lista.


//Tipo Exportado

typedef struct listahet ListaHet;
typedef struct listahetno ListaHetNo;

struct listahet {
ListaHetNo* prim;
 }
 
 struct listahetno {
 Tipo tipo;
 void* info;
 ListaHetNo* prox;
 };
 
*/ A função para criação do nó deve ter três variações.
– Observe como fica para um triângulo, as outras seguem a mesma lógica de inicializar o ponteiro para o tipo em questão.
/*

//Cria um nó com um triangulo
 
 ListaHetNo* cria_tri (float b, float h)
 {
 //aloca triangulo
 
*/  Triangulo* t = (Triangulo*) malloc (sizeof (Triangulo));
 t -> b = b;
 t -> h = h;
*/

 //aloca no:
 ListaHetNo* p = (ListaHetNo*) malloc (sizeof (ListaHetNo));
 p -> tipo = TRI;
 P -> info = t;
 p -> prox = NULL;
 return p;
 }
 
*/   A função auxiliar para o cálculo das áreas.
– Lembre de definir o valor de PI: #define PI 3.14159
/*

static float area (ListaHetNo* p)
{
switch (p -> tipo) {
case RET: {
 Retangulo* r = (Retangulo*) p -> info;
 return r -> b*r -> h;
 }
 break;
 
 case TRI: {
 Triangulo* t = (Triangulo*)  p -> info;
 return (t -> b-> h)/2;
 }
 
 break;
 case CIRC: {
 Circulo* c = (Circulo*) p -> info;
 return PI*c -> r*c -> r;
 }

 break;
 }
 }
 
 // função que calcula a maior área da figura geométrica
 
 float max_area (ListaHet* l)
 {
   float amax = 0.0;
   float a;
 ListaHetNo* p;
 for (p = l -> prim; p != NULL; p = p -> prox)
 {
 a = area (p);
 if (a > amax) amax = a;
 }
 return amax;

