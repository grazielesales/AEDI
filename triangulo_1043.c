#include <stdio.h>

int main() {
    // Declaração das variáveis
    double A, B, C;
    
    // Leitura dos valores reais
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    // Verificação se os valores podem formar um triângulo
    if (A + B > C && A + C > B && B + C > A) {
        // Cálculo do perímetro do triângulo
        double perimetro = A + B + C;
        printf("Perimetro = %.1lf\n", perimetro);
    } else {
        // Cálculo da área do trapézio
        double area = (A + B) * C / 2;
        printf("Area = %.1lf\n", area);
    }

    return 0;
}
