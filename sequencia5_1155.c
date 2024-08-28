#include <stdio.h>

int main() {
    double S = 0.0;

    // Cálculo de S
    for (int i = 1; i <= 100; i++) {
        S += 1.0 / i;
    }

    // Impressão do resultado com duas casas decimais
    printf("%.2f\n", S);

    return 0;
}