/******************************************************************************
 * 
(23) Escreva um programa que leia a hora de in´ıcio e de fim de um jogo de
Xadrez (considere apenas horas inteiras, sem os minutos) e calcule a dura¸c˜ao
do jogo em horas, sabendo-se que o tempo m´aximo de dura¸c˜ao do jogo ´e de 24
horas e que o jogo pode iniciar em um dia e terminar no dia seguinte;

*******************************************************************************/
#include <stdio.h>

int main() {
    int hora_inicio, hora_fim, duracao;

    printf("Digite a hora de início do jogo (hora inteira): ");
    scanf("%d", &hora_inicio);

    printf("Digite a hora de fim do jogo (hora inteira): ");
    scanf("%d", &hora_fim);

    if (hora_fim >= hora_inicio) {
        duracao = hora_fim - hora_inicio;
    } else {
        duracao = 24 - hora_inicio + hora_fim;
    }

    printf("A duração do jogo é de %d horas.\n", duracao);

    return 0;
}
