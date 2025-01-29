#include <stdio.h>

int main() {
    // Declaração das variáveis
    int valores[6];
    int i, positivos = 0;

    // Leitura dos 6 valores
    for (i = 0; i < 6; i++) {
        scanf("%d", &valores[i]);
    }

    // Contar quantos valores são positivos
    for (i = 0; i < 6; i++) {
        if (valores[i] > 0) {
            positivos++;
        }
    }

    // Imprimir a quantidade de valores positivos
    printf("%d valores positivos\n", positivos);

    return 0;
}
