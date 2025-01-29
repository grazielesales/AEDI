#include <stdio.h>

int main() {
    // Declaração das variáveis n e m 
    int n, m;

    // Lê o tamanho do vetor a
    scanf("%d", &n);

    // Declara o vetor a de tamanho n
    int a[n];

    // Lê o tamanho do vetor b
    scanf("%d", &m);

    // Declara o vetor b de tamanho m
    int b[m];

    // Lê os elementos do vetor a
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Lê os elementos do vetor b
    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);

    // Declaração de um vetor temporário 
    int vetorTemporario[n];
    int t = 0;

    // Realiza um loop enquanto t < m
    while (t < m) {
        
        // Se t < n, atualiza vetorTemporario com a multiplicação de b[t] * a[t]
        if (t < n) {
            vetorTemporario[t] = b[t] * a[t];
            t++;
        } else {
            // Caso contrário, atualiza o elemento com o menor valor em vetorTemporario
            int indice = vetorTemporario[0];
            int z = 0;
            for (int i = 0; i < n; i++) {
                if (indice > vetorTemporario[i]) {
                    indice = vetorTemporario[i];
                    z = i;
                }
            }
            vetorTemporario[z] += b[t] * a[z];
            z = 0;
            t++;
        }
    }

    // Encontra o maior valor em vetorTemporario
    int indice = vetorTemporario[0];

    for (int i = 0; i < n; i++) {
        if (indice < vetorTemporario[i]) {
            indice = vetorTemporario[i];
        }
    }
    // Imprime o maior valor encontrado
    printf("%d\n", indice);

    return 0;
}
