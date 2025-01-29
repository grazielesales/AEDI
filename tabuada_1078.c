#include <stdio.h>

    int main() {
        int N;

// ler do valor de entrada
        scanf("%i", &N);

// verificação se o valor está no intervalo válido
        if (N > 2 && N < 1000) {
// loop para gerar a tabuada de 1 a 10
            for (int i = 1; i <= 10; i++) {
                printf("%d x %d = %d\n", i, N, i * N);
            }
        } 

        return 0;
    }