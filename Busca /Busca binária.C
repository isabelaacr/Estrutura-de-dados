#include <stdio.h>
    int busca_bin (int n, int *vet, int elem)
    {
        int ini = 0;
        int fim = n-1;
        
        while (ini <= fim) {
            int meio = (ini + fim)/2;
        if (elem < vet [meio])
        fim = meio - 1;
        else if (elem > vet [meio])
        ini = meio + 1;
        else 
        return meio;
    }
    return -1;
    }

int main ()
{
    return 0;
}
