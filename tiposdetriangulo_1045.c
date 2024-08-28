#include <stdio.h>

int main() {
    // Declaração das variáveis
    double A, B, C;
    
    // Leitura dos três valores
    scanf("%lf %lf %lf", &A, &B, &C);

    // Ordenar os valores para que A seja o maior
    if (B > A) {
        double temp = A;
        A = B;
        B = temp;
    }
    if (C > A) {
        double temp = A;
        A = C;
        C = temp;
    }
    if (C > B) {
        double temp = B;
        B = C;
        C = temp;
    }

    // Verificar se os valores formam um triângulo
    if (A >= B + C) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        // Verificar o tipo de triângulo
        double A2 = A * A;
        double B2 = B * B;
        double C2 = C * C;

        if (A2 == B2 + C2) {
            printf("TRIANGULO RETANGULO\n");
        } else if (A2 > B2 + C2) {
            printf("TRIANGULO OBTUSANGULO\n");
        } else {
            printf("TRIANGULO ACUTANGULO\n");
        }

        // Verificar se é equilátero ou isósceles
        if (A == B && B == C) {
            printf("TRIANGULO EQUILATERO\n");
        } else if (A == B || B == C || A == C) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
