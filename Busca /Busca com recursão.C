#include <stdio.h>

    
    int pertence_rec (int n, int *vet, int elem)
    {
          if (n <= 0)
          return 0;
          else {
              int meio = n/2;
              if (elem  < vet [meio])
              return pertence_rec (meio, vet, elem);
          else if (elem > vet [meio])
          return pertence_rec (n-1-meio, &vet [meio + 1], elem);
      else
    return -1;
    }
}
int main ()
{
    return 0;
}
