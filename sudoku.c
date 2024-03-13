#include <stdio.h>

// Função para verificar se não há repetições em linhas horizontais
int verificarHorizontal(int matriz[9][9]) {
    int i, j, k;

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            for (k = 0; k < 9; k++) {
                if (j != k && matriz[i][j] == matriz[i][k]) {
                    return 0;
                }
            }
        }
    }

    return 1;
}

// Função para verificar se não há repetições em colunas verticais
int verificarVertical(int matriz[9][9]) {
    int i, j, k;

    for (j = 0; j < 9; j++) {
        for (i = 0; i < 9; i++) {
            for (k = 0; k < 9; k++) {
                if (i != k && matriz[i][j] == matriz[k][j]) {
                    return 0;
                }
            }
        }
    }

    return 1;
}

// Função para verificar se não há repetições em submatrizes menores de 3x3
int checarMenor(int mini[3][3]) {
    int i, j, num, existe = 0;

    for (num = 1; num <= 9; num++) {
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                if (mini[i][j] == num) {
                    existe++;
                }
            }
        }
        if (existe > 1) {
            return 0;
        }
        existe = 0;
    }

    return 1;
}

// Função para verificar se não há repetições em todas as submatrizes menores
int checarMenores(int matriz[9][9]) {
    int i, j, k, l, mini[3][3];

    for (i = 0; i < 9; i += 3) {
        for (j = 0; j < 9; j += 3) {
            for (k = 0; k < 3; k++) {
                for (l = 0; l < 3; l++) {
                    mini[k][l] = matriz[k + i][l + j];
                }
            }
            if (!checarMenor(mini)) {
                return 0;
            }
        }
    }

    return 1;
}

// Função para preencher a matriz de Sudoku
void popularMatriz(int matriz[9][9]) {
    int i, j;

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            scanf("%d", &matriz[i][j]);
            while (matriz[i][j] < 1 || matriz[i][j] > 9) {
                printf("Somente valores maiores que 0 e menores ou iguais a 9 são permitidos no jogo de sudoku, digite outro valor.\n");
                scanf("%d", &matriz[i][j]);
            }
        }
    }
}

int main() {
    int n, inst, matriz[9][9];

    scanf("%d", &n);
    for (inst = 1; inst <= n; inst++) {
        printf("Instancia %d\n", inst);

        popularMatriz(matriz);

        // Verifica se todas as condições de Sudoku são atendidas
        if (verificarHorizontal(matriz) && verificarVertical(matriz) && checarMenores(matriz)) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }

        printf("\n"); // linha em branco entre as instâncias
    }

    return 0;
}
