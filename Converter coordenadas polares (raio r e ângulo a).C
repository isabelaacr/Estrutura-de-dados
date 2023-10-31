/******************************************************************************

//Converter coordenadas polares (raio r e ângulo a) em coordenadas cartesianas (abcissa x e ordenada y)

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
  float raio, angulo;
  double x, y;

  printf ("Digite os valores das coordenadas polares (raio r e ângulo a): \n");
  scanf ("%f %f", &raio, &angulo);
   angulo = angulo * 0.0174532925;
x = raio * cos(angulo);
y = raio * sin(angulo);
      printf ("Conversão das unidades: \n");
         printf("\nx = %.2f",x);
    printf("\ny = %.2f",y);

  return 0;
}
