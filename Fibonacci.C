
int fibonacci(int i) {
    if (i < 2) {
        return i;
    } else {
        int a = 0;
        int b = 1;
        for (int j = 2; j <= i; ++j) {
            int c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
}

int main() {
    int n;
    printf("Digite um índice: ");
    scanf("%d", &n);
    
    int resultado = fibonacci(n);
    printf("O número Fibonacci no índice %d é %d\n", n, resultado);
    
    return 0;
}
