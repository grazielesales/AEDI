#include <stdio.h>
#include <stdlib.h>

#define MAX_CARDS 100000

// Função para encontrar o número de cartas distintas que Alice e Beatriz podem trocar
int max_cards_to_swap(int *alice_cards, int alice_count, int *beatriz_cards, int beatriz_count) {
    int alice_present[MAX_CARDS] = {0};
    int beatriz_present[MAX_CARDS] = {0};
    
    int i, unique_alice = 0, unique_beatriz = 0;
    
    // Marca as cartas de Alice
    for (i = 0; i < alice_count; i++) {
        alice_present[alice_cards[i]] = 1;
    }
    
    // Marca as cartas de Beatriz
    for (i = 0; i < beatriz_count; i++) {
        beatriz_present[beatriz_cards[i]] = 1;
    }
    
    // Contar as cartas únicas que Alice pode dar
    for (i = 0; i < MAX_CARDS; i++) {
        if (alice_present[i] && !beatriz_present[i]) {
            unique_alice++;
        }
    }
    
    // Contar as cartas únicas que Beatriz pode dar
    for (i = 0; i < MAX_CARDS; i++) {
        if (beatriz_present[i] && !alice_present[i]) {
            unique_beatriz++;
        }
    }
    
    // O máximo de cartas trocáveis é o menor entre os números de cartas únicas que cada uma pode dar
    return unique_alice < unique_beatriz ? unique_alice : unique_beatriz;
}

int main() {
    int alice_count, beatriz_count;
    
    while (scanf("%d %d", &alice_count, &beatriz_count) && (alice_count != 0 || beatriz_count != 0)) {
        int alice_cards[alice_count];
        int beatriz_cards[beatriz_count];
        int i;
        
        // Leitura das cartas de Alice
        for (i = 0; i < alice_count; i++) {
            scanf("%d", &alice_cards[i]);
        }
        
        // Leitura das cartas de Beatriz
        for (i = 0; i < beatriz_count; i++) {
            scanf("%d", &beatriz_cards[i]);
        }
        
        // Calcula e imprime o número máximo de cartas que podem ser trocadas
        printf("%d\n", max_cards_to_swap(alice_cards, alice_count, beatriz_cards, beatriz_count));
    }
    
    return 0;
}
