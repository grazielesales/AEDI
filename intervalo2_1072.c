#include <stdio.h>

int main() {
    int N, X;
    int count_in = 0, count_out = 0;

    // Leitura do número de casos de teste
    scanf("%d", &N);

    // Leitura dos valores e contagem
    for (int i = 0; i < N; i++) {
        scanf("%d", &X);
        if (X >= 10 && X <= 20) {
            count_in++;
        } else {
            count_out++;
        }
    }

    // Exibição dos resultados
    printf("%d in\n", count_in);
    printf("%d out\n", count_out);

    return 0;
}
