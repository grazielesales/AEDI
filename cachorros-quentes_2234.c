#include <stdio.h>

int main() {
    int H, P;
    
    // Leitura dos valores de H e P
    scanf("%d %d", &H, &P);
    
    // Calcula a média de cachorros-quentes por participante
    double media = (double)H / P;
    
    // Imprime o resultado com exatamente dois dígitos após o ponto decimal
    printf("%.2f\n", media);
    
    return 0;
}
