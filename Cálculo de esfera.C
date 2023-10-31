// Valor do raio de uma esfera, volume e área

#include <stdio.h>
#include <math.h>

int main ( )
{
    float raio, volume, area;
    
    scanf ("%f", &raio);
    
    volume = (4/3)*3.14*pow(raio,3);
    area = 4*3.14*pow(raio, 2);
    
    printf ("O volume da esfera eh: %f\n", volume);
    printf ("A area da esfera eh: %f", area);
    
    return 0;
}
