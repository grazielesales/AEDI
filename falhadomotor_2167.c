#include <stdio.h>

int main() {
    int N;
    
    // Leitura do número de medidas
    scanf("%d", &N);
    
    // Definir um array para armazenar as medidas de velocidade
    int velocidades[N];
    
    // Leitura das medidas de velocidade
    for (int i = 0; i < N; i++) {
        scanf("%d", &velocidades[i]);
    }
    
    // Verificar a primeira queda de velocidade
    int indice_queda = 0;
    for (int i = 1; i < N; i++) {
        if (velocidades[i] < velocidades[i - 1]) {
            indice_queda = i + 1; // +1 para o índice começar de 1
            break;
        }
    }
    
    // Imprimir o resultado
    printf("%d\n", indice_queda);
    
    return 0;
}
