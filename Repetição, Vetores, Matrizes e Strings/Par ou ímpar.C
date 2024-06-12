#include <stdio.h>
int par_impar(int n1) {
if (n1%2==0) {;
    return 0;
    }
else { 
    return 1;
    }
}

int main()
{
    int n1;
    
    printf("Digite um numero inteiro maior do que zero:\n");
    scanf("%d", &n1);
     if (n1 > 0) {
     int resultado = par_impar(n1);
      if (resultado == 0) {
        printf("O numero eh par!\n");
    }
    else {
        printf("O numero eh impar!\n");
    }
   } else {
        printf("Numero invalido.\n");
    }
    return 0;
}
