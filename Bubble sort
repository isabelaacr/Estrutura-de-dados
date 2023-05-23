#include <stdio.h>
    
   void bolha (int n, int *v)
    {
      for (int i = n - 1; i >= 1; --i) {
           for (int j = 0; j < i; ++j) {
          if (v [j] > v [j+1]) {
          int temp = v [j];
          v [j] = v [j+1];
          v [j+1] = temp;
          }
           }
      }
    }
      
    int main ()
{
return 0;
}

//Outra versão:
#include <stdio.h>
    
   void bolha (int n, int *v)
    {
      for (int i = n - 1; i > 0; --i) {
          int troca = 0;
           for (int j = 0; j < i; ++j) {
          if (v [j] > v [j+1]) {
          int temp = v [j];
          v [j] = v [j+1];
          v [j+1] = temp;
          }
           }
           if (troca == 0)
      return;
          
      }
    }
      
    int main ()
{
return 0;
}


//Teste:

 void bolha (int n, int *v)
    {
      for (int i = n - 1; i > 0; --i) {
          int troca = 0;
           for (int j = 0; j < i; ++j) {
          if (v [j] > v [j+1]) {
          int temp = v [j];
          v [j] = v [j+1];
          v [j+1] = temp;
          }
           }
           if (troca == 0)
      return;
          
      }
    }

#include <stdio.h>
     
    int main ()
{
    int v [8] = {25, 48, 37, 12, 57, 86, 33, 92};
    bolha (8, v);
    printf ("Vetor ordenado: ");
    for (int i = 0; i < 8; ++i)
    printf ("%d", v [i]);
    printf ("\n");
return 0;
}
