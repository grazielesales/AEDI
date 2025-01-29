#include <stdio.h>

int main() {
    int N; // Número de casos de teste
    int quantia; // Quantidade de cobaias em cada experimento
    char tipo; // Tipo de cobaia (R, S, C)
    int total = 0, totalCoelhos = 0, totalRatos = 0, totalSapos = 0; // Contadores

    // Leitura do número de casos de teste
    scanf("%d", &N);

    // Loop para processar cada caso de teste
    for (int i = 0; i < N; i++) {
        // Leitura da quantidade e do tipo de cobaia
        scanf("%d %c", &quantia, &tipo);

        // Atualização dos contadores
        total += quantia;
        if (tipo == 'C') {
            totalCoelhos += quantia;
        } else if (tipo == 'R') {
            totalRatos += quantia;
        } else if (tipo == 'S') {
            totalSapos += quantia;
        }
    }

    // Cálculo dos percentuais
    double percCoelhos = (double) totalCoelhos / total * 100.0;
    double percRatos = (double) totalRatos / total * 100.0;
    double percSapos = (double) totalSapos / total * 100.0;

    // Impressão dos resultados
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", totalCoelhos);
    printf("Total de ratos: %d\n", totalRatos);
    printf("Total de sapos: %d\n", totalSapos);
    printf("Percentual de coelhos: %.2lf %%\n", percCoelhos);
    printf("Percentual de ratos: %.2lf %%\n", percRatos);
    printf("Percentual de sapos: %.2lf %%\n", percSapos);

    return 0;
}
