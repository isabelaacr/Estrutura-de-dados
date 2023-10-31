#include <stdio.h>
    
    int busca_ord (int n, int *vet, int elem)
    {
      for (int i = 0; i < n; ++i) {
          if (elem == vet [i])
          return i;
          else if (elem < vet [i])
          return -1;
      }
    return -1;
    }
    int main ()
{
return 0;
}
