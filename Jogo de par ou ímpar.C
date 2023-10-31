//Jogo de par ou ímpar

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
   int escolha, usuario, computador;
   
   printf ("Entre com sua escolha: 0 (par) ou 1 (ímpar): ");
   scanf ("%d", &escolha);
   printf ("Entre com seu numero: ");
   scanf ("%d", &usuario);
   
   srand (time (NULL)); 
   computador = rand () %10;
   printf ("Computador: %d\n", computador);
   
    return 0;
} 
