#include <stdio.h>

int main() {
    int n; // Número de alunos
    scanf("%d", &n);

    int matricula, melhor_matricula = 0;
    float nota, melhor_nota = -1.0;

    // Ler os dados dos alunos
    for (int i = 0; i < n; i++) {
        scanf("%d %f", &matricula, &nota);

        // Atualiza a melhor nota e matrícula se a nota for maior que a melhor nota atual
        if (nota >= 8.0 && nota > melhor_nota) {
            melhor_nota = nota;
            melhor_matricula = matricula;
        }
    }

    // Verifica se a melhor nota é maior ou igual a 8
    if (melhor_nota >= 8.0) {
        printf("%d\n", melhor_matricula);
    } else {
        printf("Minimum note not reached\n");
    }

    return 0;
}
