/******************************************************************************

 (7) Escreva uma funcao que leia os tres lados de um triangulo, no formato double,
 e retorne 0 se ele e isosceles, 1 se for escaleno ou 2 se for equilatero. Utilize o
 seguinte prototipo: int tipo triangulo(double, double, double);

*******************************************************************************/

#include <stdio.h>

int tipo_triangulo(double a, double b, double c) {
    if (a == b && b == c) {
        return 2; // Equilátero
    }
    if (a != b && a != c && b != c) {
        return 1; // Escaleno
    }
    return 0; // Isósceles
}

int main() {
    double a, b, c;
    
    printf("Digite os três lados de um triângulo: \n");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    int resultado = tipo_triangulo(a, b, c);
    
    switch(resultado) {
        case 0:
            printf("O triângulo é isósceles\n");
            break;
        case 1:
            printf("O triângulo é escaleno\n");
            break;
        case 2:
            printf("O triângulo é equilátero\n");
            break;
        default:
            printf("Erro: triângulo inválido\n");
            break;
    }
    
    return 0;
}
