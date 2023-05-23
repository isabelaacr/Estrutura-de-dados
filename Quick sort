/* Ordenação rápida */
 void rapida (int n, int *v)
    {
          if (n > 1) {
          int x = v [0];
          int a = 1;
          int b = n-1;
          do {
              while ( a < n && v [a] <= x) ++a;
              while (v [b] > x) --b;
              if (a < b) {
                  int temp = v [a];
                  v [a] = v [b];
                  v [b] = temp;
                  ++a; --b;
              }
          }
          while (a <= b);
          
          /* Troca pivô */
          v [0] = v [b];
          v [b] = x;
          
          /* Ordenada subvetores restantes */
          rapida (b, v);
          rapida (n - a, &v [a]);
      }
    }

#include <stdio.h>
     
    int main ()
{
return 0;
}
