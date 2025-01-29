#include <stdio.h>

int main() {
    // Declaração das variáveis
    double valor;
    int notas, moedas;

    // Leitura do valor
    scanf("%lf", &valor);

    // Convertendo o valor para centavos para facilitar o cálculo
    int centavos = (int) (valor * 100 + 0.5);

    // Notas de 100
    notas = centavos / 10000;
    centavos %= 10000;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", notas);

    // Notas de 50
    notas = centavos / 5000;
    centavos %= 5000;
    printf("%d nota(s) de R$ 50.00\n", notas);

    // Notas de 20
    notas = centavos / 2000;
    centavos %= 2000;
    printf("%d nota(s) de R$ 20.00\n", notas);

    // Notas de 10
    notas = centavos / 1000;
    centavos %= 1000;
    printf("%d nota(s) de R$ 10.00\n", notas);

    // Notas de 5
    notas = centavos / 500;
    centavos %= 500;
    printf("%d nota(s) de R$ 5.00\n", notas);

    // Notas de 2
    notas = centavos / 200;
    centavos %= 200;
    printf("%d nota(s) de R$ 2.00\n", notas);

    // Moedas de 1
    moedas = centavos / 100;
    centavos %= 100;
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moedas);

    // Moedas de 0.50
    moedas = centavos / 50;
    centavos %= 50;
    printf("%d moeda(s) de R$ 0.50\n", moedas);

    // Moedas de 0.25
    moedas = centavos / 25;
    centavos %= 25;
    printf("%d moeda(s) de R$ 0.25\n", moedas);

    // Moedas de 0.10
    moedas = centavos / 10;
    centavos %= 10;
    printf("%d moeda(s) de R$ 0.10\n", moedas);

    // Moedas de 0.05
    moedas = centavos / 5;
    centavos %= 5;
    printf("%d moeda(s) de R$ 0.05\n", moedas);

    // Moedas de 0.01
    printf("%d moeda(s) de R$ 0.01\n", centavos);

    return 0;
}
