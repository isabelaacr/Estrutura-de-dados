#include <stdio.h>
#include <stdlib.h>

int main ()
{
  float P1, P2, P3, media = 0;

  printf ("Digite a nota das provas 1 e 2: \n");
  scanf ("%f %f", &P1, &P2);
media = (P1+P2)/2;
  if ((media >= 5.0) && (P1 >= 3.0) && (P2 >= 3.0))
    {
      printf ("Aprovado com media!\n");
    }

 else
    {
      printf ("Digite a nota da prova 3: \n");
      scanf ("%f", &P3);
  if (P2 > P1)   
    media = (P1 + P3) / 2;
  else 
    media = (P2 + P3) / 2;
  if (media >= 5.0)
          printf("\nAluno APROVADO com Media = %.2f", media);
       else
          printf("\nAluno REPROVADO com Media = %.2f", media);
    }
 
  
  return 0;
}
