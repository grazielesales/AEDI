#include <stdio.h>

int main() {
    // Declaração das variáveis A e B 
    int A, B;
    // Variável para armazenar a soma dos números
    int soma = 0;

    // Pede ao usuário que insira o valor de A e lê o número fornecido
    printf("Digite o valor de A: ");
    scanf("%d", &A);

    // Pede ao usuário que insira o valor de B e lê o número fornecido
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    // Calcula a soma dos números A e B
    soma = A + B;

    // Exibe o resultado da soma na tela
    printf("SOMA = %d\n", soma);

    return 0;
}
