/******************************************************************************

(15) Escreva um programa que leia uma data (dia, mes e ano em separado) e
informe se a data e valida ou nao;

*******************************************************************************/
#include <stdio.h>

int main() {
    int dia, mes, ano;
    
    printf("Digite o dia, mês e ano separados por espaços: ");
    scanf("%d %d %d", &dia, &mes, &ano);
    
    int dias_no_mes = 31;
    
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        dias_no_mes = 30;
    else if (mes == 2)
        dias_no_mes = (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) ? 29 : 28;
    
    if (dia < 1 || dia > dias_no_mes || mes < 1 || mes > 12 || ano < 1) {
        printf("Data inválida.\n");
    } else {
        printf("Data válida.\n");
    }
    
    return 0;
}
