#include <stdio.h>

int main() {
    int n, inst, i, j, k, l;
    int matriz[9][9];
    int valido;

    // Ler o número de instâncias
    scanf("%d", &n);

    for (inst = 1; inst <= n; inst++) {
        printf("Instancia %d\n", inst);

        // Preencher a matriz de Sudoku
        for (i = 0; i < 9; i++) {
            for (j = 0; j < 9; j++) {
                scanf("%d", &matriz[i][j]);
                while (matriz[i][j] < 1 || matriz[i][j] > 9) {
                    printf("Somente valores maiores que 0 e menores ou iguais a 9 são permitidos no jogo de sudoku, digite outro valor.\n");
                    scanf("%d", &matriz[i][j]);
                }
            }
        }

        // Verificar linhas horizontais
        valido = 1;
        for (i = 0; i < 9 && valido; i++) {
            int vet[10] = {0};
            for (j = 0; j < 9; j++) {
                if (vet[matriz[i][j]] == 1) {
                    valido = 0;
                    break;
                }
                vet[matriz[i][j]] = 1;
            }
        }

        // Verificar colunas verticais, se ainda for válido
        if (valido) {
            for (j = 0; j < 9 && valido; j++) {
                int vet[10] = {0};
                for (i = 0; i < 9; i++) {
                    if (vet[matriz[i][j]] == 1) {
                        valido = 0;
                        break;
                    }
                    vet[matriz[i][j]] = 1;
                }
            }
        }

        // Verificar submatrizes 3x3, se ainda for válido
        if (valido) {
            for (i = 0; i < 9 && valido; i += 3) {
                for (j = 0; j < 9 && valido; j += 3) {
                    int vet[10] = {0};
                    for (k = 0; k < 3; k++) {
                        for (l = 0; l < 3; l++) {
                            if (vet[matriz[i + k][j + l]] == 1) {
                                valido = 0;
                                break;
                            }
                            vet[matriz[i + k][j + l]] = 1;
                        }
                    }
                }
            }
        }

        // Imprimir resultado para a instância atual
        if (valido) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }

        printf("\n"); // Linha em branco entre as instâncias
    }

    return 0;
}
