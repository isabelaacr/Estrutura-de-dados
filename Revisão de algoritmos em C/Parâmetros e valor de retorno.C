// Calcule o volume de um cilindro de raio r e altura h. Volume = Pi. r^2 . h
#include <stdio.h>
#include <math.h>

#define PI 3.14159

float volume_cilindro (float r, float h) {
float v;
v = PI * pow (r, 2) * h;
return v;
}

int main ( ) {
float raio, altura, volume;
printf ("Entre com o valor do raio e da altura: ");
scanf ("%f %f", &raio, &altura);

volume = volume_cilindro (raio, altura);

printf ("Volume do cilindro = %.2f\n", volume);
return 0;
}
