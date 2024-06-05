/******************************************************************************

(8) Escreva uma funcao que le as duas coordenadas x e y de um ponto, ambas
no formato inteiro, e retorne de 1 a 4, representando o quadrante em que a
coordenada esta localizada. Utilize o seguinte prototipo: int quadrante(double,
double);

*******************************************************************************/
#include <stdio.h>

int quadrante(double x,double y) {
    if (x > 0 && y > 0) {
        return 1;
    }
    if (x < 0 && y > 0) {
        return 2;
    }
    if (x < 0 && y < 0) {
        return 3;
    }
    if (x > 0 && y < 0) {
        return 4;
    }
    return 0;
}
    
int main() {
    double x,y;
    
    printf("Escreva duas coordenadas: (x,y) \n");
    scanf ("%lf %lf",&x, &y);
    
    int resultado = quadrante(x, y);
     if (resultado == 0) {
        printf("As coordenadas estão na origem!\n");
    }
    else {
        printf("As coordenadas estão localizadas no quadrante %d!\n", resultado);
    }
    return 0;
}
