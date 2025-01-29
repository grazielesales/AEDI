#include <stdio.h>

int main(void) {
    // Declaração das variáveis 
    double a, b, c, media;
    
    // Pede ao usuário que insira os valores de a, b e c 
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    
    // Calcula a média ponderada 
    media = ((a * 2) + (b * 3) + (c * 5)) / 10;
    
    // Exibe o resultado da média com uma casa decimal na tela
    printf("MEDIA = %.1lf\n", media);
 
    return 0;
}
