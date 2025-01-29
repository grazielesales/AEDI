#include <stdio.h>

int main() {
    int x;

// leitura do valor de entrada
    scanf("%d", &x);

// para garantir que a entrada é de 1 até X
    for (int i = 1; i <= x; i++) {
        // verificar se o número é ímpar
        if (i % 2 != 0) {
// imprimir o número ímpar
            printf("%d\n", i);
        }
    }

    return 0;
}
