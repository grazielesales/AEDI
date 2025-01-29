#include <stdio.h>
#include <math.h>

int main() {
    int C;
    scanf("%d", &C);

    while (C--) {
        int n, m;
        scanf("%d %d", &n, &m);

        // Calcula o número de dígitos de n^m
        if (n == 0) {
            printf("1\n"); // 0^m = 0, que tem 1 dígito
        } else {
            int num_digits = (int)(m * log10(n)) + 1;
            printf("%d\n", num_digits);
        }
    }

    return 0;
}
