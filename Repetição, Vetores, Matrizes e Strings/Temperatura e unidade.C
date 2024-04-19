/******************************************************************************

(1) Escreva uma função que receba uma variável do tipo double representando 
temperatura e uma variável do tipo char representando a unidade, 
tal que 'c' representa graus Celsius e 'f' representa graus Fahrenheit. 
Se a função receber a unidade em Fahrenheit, ela deve converter a temperatura para Celsius, 
e se receber em Celsius, deve convertê-la para Fahrenheit. 
Em ambos os casos, a função retorna o valor no formato double. 
Para tanto, utilize o seguinte protótipo: double converterTemperatura(double, char);.

*******************************************************************************/
#include <stdio.h>

double converterTemperatura(double temperatura, char unidade) {
    if (unidade == 'c' || unidade == 'C') {
        // Se a unidade for Celsius, converte para Fahrenheit
        return (temperatura * 9 / 5) + 32;
    } else if (unidade == 'f' || unidade == 'F') {
        // Se a unidade for Fahrenheit, converte para Celsius
        return (temperatura - 32) * 5 / 9;
    } else {
        // Caso a unidade seja inválida, retorna um valor especial (pode ser tratado de outra forma pelo programa principal)
        return -9999.0;
    }
}

int main() {
    double temp;
    char unidade;
    
    printf("Digite a temperatura e a unidade (C para Celsius, F para Fahrenheit): ");
    scanf("%lf %c", &temp, &unidade);
    
    double resultado = converterTemperatura(temp, unidade);
    
    if (resultado == -9999.0) {
        printf("Unidade inválida.\n");
    } else {
        printf("Temperatura convertida: %.2lf\n", resultado);
    }
    
    return 0;
}
