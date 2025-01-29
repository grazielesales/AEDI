#include <stdio.h>

int main() {
    int N, X, Y;

    // Leitura dos valores
    scanf("%d %d %d", &N, &X, &Y);

    // Cálculo do ICM
    double ICM = (double) N / (X + Y);

    // Impressão do resultado com 2 casas decimais
    printf("%.2f\n", ICM);

    return 0;
}
