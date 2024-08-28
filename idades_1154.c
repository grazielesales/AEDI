#include <stdio.h>

int main() {
    int idade;
    int soma_idades = 0;
    int count_idades = 0;

    // Ler idades até encontrar um valor negativo
    while (1) {
        scanf("%d", &idade);
        if (idade < 0) {
            break; // Encerra a leitura ao encontrar um valor negativo
        }
        soma_idades += idade;
        count_idades++;
    }

    // Verificar se foram lidas idades para evitar divisão por zero
    if (count_idades > 0) {
        double media_idades = (double)soma_idades / count_idades;
        printf("%.2f\n", media_idades);
    } else {
        // Caso não haja idades válidas (não deve ocorrer pelo enunciado)
        printf("0.00\n");
    }

    return 0;
}