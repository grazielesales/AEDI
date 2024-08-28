#include <stdio.h>

int main() {
    int senha;

    // Loop para continuar a leitura até que a senha correta seja fornecida
    while (1) {
        // Ler a senha
        scanf("%d", &senha);

        // Verificar se a senha é a correta
        if (senha == 2002) {
            printf("Acesso Permitido\n");
            break; // Encerrar o loop e o programa
        } else {
            printf("Senha Invalida\n");
        }
    }

    return 0;
}
