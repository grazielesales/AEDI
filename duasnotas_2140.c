#include <stdio.h>

int main() {
    // Definindo as notas disponíveis
    int notas[] = {2, 5, 10, 20, 50, 100};
    int num_notas = sizeof(notas) / sizeof(notas[0]);
    
    int N, M;
    
    while (1) {
        // Lê os valores de N e M
        scanf("%d %d", &N, &M);
        
        // Verifica a condição de término
        if (N == 0 && M == 0) {
            break;
        }
        
        // Calcula o valor do troco necessário
        int troco = M - N;
        int encontrado = 0;
        
        // Verifica todas as combinações de duas notas
        for (int i = 0; i < num_notas; i++) {
            for (int j = i; j < num_notas; j++) {
                if (notas[i] + notas[j] == troco) {
                    encontrado = 1;
                    break;
                }
            }
            if (encontrado) {
                break;
            }
        }
        
        // Imprime o resultado
        if (encontrado) {
            printf("possible\n");
        } else {
            printf("impossible\n");
        }
    }
    
    return 0;
}
