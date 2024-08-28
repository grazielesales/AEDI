#include <stdio.h>

struct mesNome {
    int mes;
    char nome[50];
};
// função para obter o nome do mês a partir do número do mês
int main() {
    struct mesNome nomes[] = {
        {1, "January"},
        {2, "February"},
        {3, "March"},
        {4, "April"},
        {5, "May"},
        {6, "June"},
        {7, "July"},
        {8, "August"},
        {9, "September"},
        {10, "October"},
        {11, "November"},
        {12, "December"}
    };
  // declaração de variáveis
    int total_nomes = sizeof(nomes) / sizeof(nomes[0]);
    int mes;
  // solicita ao usuário que insira o número do mês
    scanf("%i" , &mes);
// verifica se o número do mês está dentro do intervalo válido
    for (int i = 0; i < total_nomes; i++) {
       if (nomes[i].mes == mes) {
        printf("%s\n", nomes[i].nome);
        return 0; 
        }
    }
    // se o número do mês não estiver dentro do intervalo válido, o programa terminará silenciosamente
    return 0;
}