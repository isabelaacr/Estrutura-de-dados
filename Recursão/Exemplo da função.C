/* Dentro do corpo de uma função podemos chamar novamente a própria função.

Exemplo: */

void func (int n)
{
printf ("%d", n);
if (n > 0) {
func (n-1);
printf (" * ");
  }
}

/* O valor do fatorial pode ser definido por:

n! = 1 se n = 0
   = n * (n-1)! se n > 0 

   Função recursiva para o cálculo do fatorial: */
   int fat (int n)
   {
   if (n == 0)
    return 1;
    else 
    return n * fat (n - 1);
    }
