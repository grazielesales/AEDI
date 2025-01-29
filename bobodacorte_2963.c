#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int votos[N];
    int max_votos = 0;
    int carlos_votos;
    
    // Ler os votos e determinar o máximo
    for (int i = 0; i < N; i++) {
        scanf("%d", &votos[i]);
        if (i == 0) {
            carlos_votos = votos[i]; // Guardar os votos de Carlos
        }
        if (votos[i] > max_votos) {
            max_votos = votos[i];
        }
    }

    // Verificar se Carlos tem o máximo de votos
    if (carlos_votos == max_votos) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}
