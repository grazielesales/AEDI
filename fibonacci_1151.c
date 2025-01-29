#include <stdio.h>

int main() {
    int N;
    
    // Ler o valor de N
    scanf("%d", &N);
    
    // Verificar se o valor de N está dentro do intervalo permitido
    if (N <= 0 || N >= 46) {
        return 1; // Encerrar o programa com um código de erro
    }
    
    // Arrays para armazenar os números da sequência de Fibonacci
    long long fibonacci[N];
    
    // Inicializar os primeiros números da sequência de Fibonacci
    if (N > 0) fibonacci[0] = 0;
    if (N > 1) fibonacci[1] = 1;
    
    // Calcular a sequência de Fibonacci
    for (int i = 2; i < N; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }
    
    // Exibir os números da sequência de Fibonacci
    for (int i = 0; i < N; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%lld", fibonacci[i]);
    }
    printf("\n");
    
    return 0;
}
