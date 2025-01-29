#include <stdio.h>

int main() {
    int A, B;
    // Leitura dos valores das duas cartas
    scanf("%d %d", &A, &B);
    
    int best_value = -1;
    
    // Loop para encontrar a melhor carta para maximizar a probabilidade de ganhar
    for (int C = 1; C <= 13; ++C) {
        if (C == A || C == B) {
            // Se formar um trio
            if (C > best_value) {
                best_value = C;
            }
        } else {
            // Se formar uma dupla ou ser uma carta distinta
            if (A > best_value) {
                best_value = A;
            }
            if (B > best_value) {
                best_value = B;
            }
        }
    }
    
    // Impressão do valor da melhor carta
    printf("%d\n", best_value);
    
    return 0;
}
