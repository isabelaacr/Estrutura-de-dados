Considerando que os valores serão fornecidos pelo usuário, 
podemos fazer um programa que lê inicialmente o número de valores que será fornecido e, 
em seguida, para cada valor capturado, acumula o valor numa variável que representa o somatório
de todos os valores. Por fim, o valor da média é calculado e exibido:

#include <stdio.h>
int main ( )
{
int n; //número de valores
float xi; //cada um dos valores a ser lido
float s = 0.0f; //somatório dos valores

//lê número de valores
printf("Entre com o número de valores: ");
scanf ("%d", &n);

//captura e acumula cada valor lido
printf ("Entre com os valores: \n");
for (int i = 0; i < n; i++) {
scanf ("%f", &xi);
s += xi;
}

//calcula e exibe o valor da média
float m = s/n;
printf ("Média: %f\n", m);

return 0;
}
