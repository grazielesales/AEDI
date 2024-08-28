#include <stdio.h>
#include <string.h>

int main() {
    char mensagem[101];  // Buffer para a mensagem, máximo 100 bits + 1 para o terminador nulo

    // Leitura da mensagem
    while (scanf("%s", mensagem) != EOF) {
        int count_1s = 0;
        
        // Contar o número de bits 1 na mensagem
        for (int i = 0; i < strlen(mensagem); i++) {
            if (mensagem[i] == '1') {
                count_1s++;
            }
        }
        
        // Determinar o bit de paridade
        char bit_paridade = (count_1s % 2 == 0) ? '0' : '1';
        
        // Adicionar o bit de paridade ao final da mensagem
        printf("%s%c\n", mensagem, bit_paridade);
    }
    
    return 0;
}
