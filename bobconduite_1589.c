#include <stdio.h>

int main() {
    int T, R1, R2;
    
    // Leitura do número de casos de teste
    scanf("%d", &T);
    
    // Processando cada caso de teste
    while (T--) {
        // Leitura dos raios R1 e R2
        scanf("%d %d", &R1, &R2);
        
        // O menor raio possível do conduíte será a soma de R1 e R2
        printf("%d\n", R1 + R2);
    }
    
    return 0;
}