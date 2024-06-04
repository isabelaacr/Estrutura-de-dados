/******************************************************************************

 (7) Escreva uma funcao que leia os tres lados de um triangulo, no formato double,
 e retorne 0 se ele e isosceles, 1 se for escaleno ou 2 se for equilatero. Utilize o
 seguinte prototipo: int tipo triangulo(double, double, double);

*******************************************************************************/

#include <stdio.h>

int tipo_triangulo(double a, double b, double c) {
    if ((a == b && b != c) || (a != b && b == c) || (a == c && b != c)) {
        return 0; // Isósceles
    }
    else if (a != b && b != c && a != c) {
        return 1; // Escaleno
    }
    else {
        return 2; // Equilátero
    }
}

int main() {
    double a, b, c;
    
    printf("Digite os três lados de um triângulo: \n");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    int resultado = tipo_triangulo(a, b, c);
    if (resultado == 0) {
        printf("O triângulo é isósceles\n");
    }
    else if (resultado == 1) {
        printf("O triângulo é escaleno\n");
    }
    else {
        printf("O triângulo é equilátero\n");
    }
    
    return 0;
}
