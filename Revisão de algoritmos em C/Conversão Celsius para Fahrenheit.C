// Converter Celsius para Fahrenheit

#include <stdio.h>

int main() {
    double Celsius, Fahrenheit; // armazena os valores
    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &Celsius); // captura o valor fornecido
    Fahrenheit = 1.8 * Celsius + 32; // conversão
    printf("Temperatura em Fahrenheit: %lf\n", Fahrenheit); // exibe o resultado
    return 0;
}
