#include <stdio.h>

// Definindo a struct para armazenar os dados das cobaias
typedef struct {
    int total;
    int coelhos;
    int ratos;
    int sapos;
} Cobaias;

int main() {
    int N; // Número de casos de teste
    Cobaias cobaias = {0, 0, 0, 0}; // Inicializando a struct

    // Leitura do número de casos de teste
    scanf("%d", &N);

    // Loop para processar cada caso de teste
    for (int i = 0; i < N; i++) {
        int quantia;
        char tipo;

        // Leitura da quantidade e do tipo de cobaia
        scanf("%d %c", &quantia, &tipo);

        // Atualização dos contadores na struct
        cobaias.total += quantia;
        if (tipo == 'C') {
            cobaias.coelhos += quantia;
        } else if (tipo == 'R') {
            cobaias.ratos += quantia;
        } else if (tipo == 'S') {
            cobaias.sapos += quantia;
        }
    }

    // Cálculo dos percentuais
    double percCoelhos = (double) cobaias.coelhos / cobaias.total * 100.0;
    double percRatos = (double) cobaias.ratos / cobaias.total * 100.0;
    double percSapos = (double) cobaias.sapos / cobaias.total * 100.0;

    // Impressão dos resultados
    printf("Total: %d cobaias\n", cobaias.total);
    printf("Total de coelhos: %d\n", cobaias.coelhos);
    printf("Total de ratos: %d\n", cobaias.ratos);
    printf("Total de sapos: %d\n", cobaias.sapos);
    printf("Percentual de coelhos: %.2lf %%\n", percCoelhos);
    printf("Percentual de ratos: %.2lf %%\n", percRatos);
    printf("Percentual de sapos: %.2lf %%\n", percSapos);

    return 0;
}
