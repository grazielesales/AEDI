#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Função para verificar se um número é primo
bool eh_primo(int x) {
    if (x <= 1) return false;
    if (x <= 3) return true;
    if (x % 2 == 0 || x % 3 == 0) return false;
    
    // Verificar divisibilidade até a raiz quadrada de x
    int raiz = (int) sqrt(x);
    for (int i = 5; i <= raiz; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int N, X;

    // Ler o número de casos de teste
    scanf("%d", &N);

    // Processar cada caso de teste
    for (int i = 0; i < N; i++) {
        scanf("%d", &X);
        if (eh_primo(X)) {
            printf("%d eh primo\n", X);
        } else {
            printf("%d nao eh primo\n", X);
        }
    }

    return 0;
}
