#include <stdio.h>
int main ()
{
float v[6] = {2.3, 5.4, 1.0, 7.6, 8.8, 3.9};

float s = 0.0;
for (int i = 0; i < 6; i++) {
s = s + v [i];
}
printf ("Somatorio: %f\n", s);
return 0;
}
