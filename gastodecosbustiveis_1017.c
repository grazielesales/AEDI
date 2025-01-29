#include <stdio.h>

int main() {
    int tempo, velocidade;
    double distancia, litros;

    // Ler o tempo gasto na viagem e a velocidade média
    scanf("%d %d", &tempo, &velocidade);

    // Calcular a distância percorrida
    distancia = tempo * velocidade;

    // Calcular a quantidade de litros necessária (12 km/L)
    litros = distancia / 12.0;

    // Imprimir o resultado com 3 casas decimais
    printf("%.3f\n", litros);

    return 0;
}
