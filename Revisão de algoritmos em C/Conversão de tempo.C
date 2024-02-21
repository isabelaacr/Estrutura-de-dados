// Escreva um programa que capture do teclado o número de segundos transcorridos num evento
// Imprima o tempo no formato hora-minuto-segundo: h:m:s
// Hora e minuto devem ser com dois dígitos preenchidos com zero à esquerda ("%02d")
// Segundo exibido com duas casas decimais, preenchido com zero à esquerda (%05.2f)


#include <stdio.h>

int main ( )
{
    int m;
    float s, h;
    printf ("Segundos transcorridos no evento: ");
    scanf ("%f", &s);
    
    m = s/60;
    h = s/3600;
    
    printf ("Minutos: %02d\n",m);
    printf ("Horas: %05.2f", h);
    
    return 0;
}
