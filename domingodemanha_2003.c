#include <stdio.h>

int main() {
    int h, m;
    
    // Continuar lendo a entrada até o fim do arquivo (EOF)
    while (scanf("%d:%d", &h, &m) != EOF) {
        // Converte o horário de despertar para o total de minutos desde a meia-noite
        int hora_despertar = h * 60 + m;
        // O horário mais tarde possível para chegada considerando o tempo máximo de viagem
        int chegada_maxima = hora_despertar + 60;  // O tempo máximo de viagem é de 60 minutos
        
        // O horário alvo para chegada é 8:00, que equivale a 480 minutos desde a meia-noite
        int hora_alvo = 8 * 60;
        
        // Calcula o atraso máximo possível
        int atraso_maximo = chegada_maxima - hora_alvo;
        
        // Se o atraso calculado for negativo, significa que Bino não chegaria atrasado
        if (atraso_maximo < 0) {
            atraso_maximo = 0;
        }
        
        // Imprime o resultado
        printf("Atraso maximo: %d\n", atraso_maximo);
    }
    
    return 0;
}
