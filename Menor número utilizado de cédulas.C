// Considere os valores de cédulas: 100, 50, 20, 10, 5, 2, 1
// Determine o menor número de notaas para se obter o montante fornecido.
// O programa deve exibir o número de notas para cada um dos valores de notas existentes

int main()
{
    int valor, cedulas[] = {100, 50, 20, 10, 5, 2, 1};
    int quantidade[7] = {0}; // inicializa todas as posições com zero

    printf("Digite o valor do montante: ");
    scanf("%d", &valor);

    for (int i = 0; i < 7; i++) {
        quantidade[i] = valor / cedulas[i];
        valor = valor % cedulas[i];
    }

    printf("Quantidade de notas:\n");
    for (int i = 0; i < 7; i++) {
        printf("%d nota(s) de %d\n", quantidade[i], cedulas[i]);
    }

    return 0;
}
