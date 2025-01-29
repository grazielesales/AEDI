#include <stdio.h>

int main() {
    // Declaração das variáveis
    int N, X, Y;

    // Leitura do número de casos de teste
    scanf("%d", &N);

    // Loop para cada caso de teste
    for (int i = 0; i < N; i++) {
        // Leitura dos valores X e Y
        scanf("%d %d", &X, &Y);

        // Garantir que X seja o menor e Y seja o maior
        if (X > Y) {
            int temp = X;
            X = Y;
            Y = temp;
        }

        // Calcular a soma dos ímpares entre X e Y
        int soma = 0;
        for (int j = X + 1; j < Y; j++) {
            if (j % 2 != 0) {
                soma += j;
            }
        }

        // Imprimir a soma dos ímpares
        printf("%d\n", soma);
    }

    return 0;
}
