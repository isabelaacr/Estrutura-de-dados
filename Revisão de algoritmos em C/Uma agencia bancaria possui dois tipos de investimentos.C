/******************************************************************************

(27) Uma agencia bancaria possui dois tipos de investimentos, conforme o quadro
a seguir. Faca um algoritmo que receba o tipo de investimento e o valor do
investimento e que calcule e mostre o valor corrigido de acordo com o tipo de
investimento: tipo 1 - Poupan¸ca - 0.4% ao mˆes, tipo 2 - Fundos de renda Fixa -
1% ao mˆes;

*******************************************************************************/
#include <stdio.h>

int main()
{
    int tipo_investimento;
    float valor_investimento, poupanca,renda_fixa;
    
    printf ("Escreva o valor do investimento: ");
    scanf("%f", &valor_investimento);
    
    printf ("Escreva o tipo do investimento: (1 - poupanca, 2 - renda fixa)\n");
    scanf ("%d", &tipo_investimento);
    
    switch (tipo_investimento) {
        case 1: 
        poupanca = valor_investimento*4/100 + valor_investimento;
        printf("Valor da poupanca: %.2f\n", poupanca);
        break;
        
        case 2: 
        renda_fixa = valor_investimento*1/100 + renda_fixa;
        printf("Valor renda_fixa: %.2f\n", renda_fixa);
        break;
    }

    return 0;
}
