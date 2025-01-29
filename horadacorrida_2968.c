#include <stdio.h>
#include <math.h> // Para a função ceil

int main() {
    int V, N;
    scanf("%d %d", &V, &N);

    int total_placas = V * N;
    
    // Percentuais de 10% a 90%
    for (int i = 1; i <= 9; i++) {
        int percentual = i * 10;
        int placas_necessarias = (int)ceil((percentual / 100.0) * total_placas);
        printf("%d", placas_necessarias);
        if (i < 9) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
