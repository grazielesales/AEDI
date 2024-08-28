#include <stdio.h>

int main() {
    // Declaração da variável
    int idade_dias;
    
    // Leitura do valor em dias
    scanf("%d", &idade_dias);
    
    // Cálculo dos anos, meses e dias
    int anos = idade_dias / 365;
    int dias_restantes = idade_dias % 365;
    int meses = dias_restantes / 30;
    dias_restantes = dias_restantes % 30;
    
    // Impressão dos resultados
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias_restantes);
    
    return 0;
}
