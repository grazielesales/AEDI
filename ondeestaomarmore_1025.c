#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int case_num = 1;

    while (1) {
        int N, Q;
        scanf("%d %d", &N, &Q);

        if (N == 0 && Q == 0) {
            break;
        }

        int marbles[N];

        // Lendo os números dos mármores
        for (int i = 0; i < N; i++) {
            scanf("%d", &marbles[i]);
        }

        // Ordenando os mármores
        qsort(marbles, N, sizeof(int), compare);

        printf("CASE# %d:\n", case_num);
        case_num++;

        // Processando as consultas
        for (int i = 0; i < Q; i++) {
            int query;
            scanf("%d", &query);

            // Usando busca binária para encontrar o mármore
            int left = 0, right = N - 1;
            int found_position = -1;

            while (left <= right) {
                int mid = (left + right) / 2;
                if (marbles[mid] == query) {
                    found_position = mid;
                    right = mid - 1; // Para encontrar a primeira ocorrência
                } else if (marbles[mid] < query) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }

            if (found_position != -1) {
                printf("%d found at %d\n", query, found_position + 1);
            } else {
                printf("%d not found\n", query);
            }
        }
    }

    return 0;
}
