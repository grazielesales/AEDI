#include <stdio.h>
#include <string.h>

int main() {
    int QT;
    scanf("%d", &QT);

    char jogador1[101], jogador2[101];
    char escolha1[6], escolha2[6];
    long long int N, M;

    for (int i = 0; i < QT; i++) {
        // Leitura dos jogadores e suas escolhas
        scanf("%s %s %s %s", jogador1, escolha1, jogador2, escolha2);
        
        // Leitura dos números escolhidos pelos jogadores
        scanf("%lld %lld", &N, &M);
        
        // Calcular a soma dos números
        long long int soma = N + M;
        
        // Determinar o vencedor
        if (soma % 2 == 0) {  // A soma é par
            if (strcmp(escolha1, "PAR") == 0) {
                printf("%s\n", jogador1);
            } else {
                printf("%s\n", jogador2);
            }
        } else {  // A soma é ímpar
            if (strcmp(escolha1, "IMPAR") == 0) {
                printf("%s\n", jogador1);
            } else {
                printf("%s\n", jogador2);
            }
        }
    }

    return 0;
}
