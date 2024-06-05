/******************************************************************************

(4) Escreva uma funcao que receba dois valores do tipo double representando a
base e a altura de um triangulo e retorne o valor da sua area no formato double.
Utilize o seguinte prototipo: double area triangulo(double,double);


*******************************************************************************/
#include <stdio.h>

    double area_triangulo(double base,double altura) {
    
    double area = (base*altura)/2;
    
    return area;
    
    }
    
    
    int main() {

    double base, altura, resultado;
    
    printf("Digite o tamanho da base do triangulo:\n");
    scanf ("%lf", &base);
      
    printf("Digite a altura do triangulo:\n");
    scanf ("%lf", &altura);
    
  
    resultado = area_triangulo(base, altura);
    printf ("A area do triangulo eh: %lf\n", resultado);
    return 0;
}
