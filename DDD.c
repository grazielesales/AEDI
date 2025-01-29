//beecrowd | 1050 

#include <stdio.h>

// estrutura para armazenar DDD e destino
struct DDDnome{

 int ddd;
 char destino[50];
};
// vetor de estruturas e seus respectivos destinos
 int main() {
      struct DDDnome ddds[] = {
        {61, "Brasilia"},
        {71, "Salvador"},
        {11, "Sao Paulo"},
        {21, "Rio de Janeiro"},
        {32, "Juiz de Fora"},
        {19, "Campinas"},
        {27, "Vitoria"},
        {31, "Belo Horizonte"}
    };
// variavel para armazenar o DDD digitado pelo usuario
int ddd;
int encontrado = 0;
scanf("%i", &ddd);
// percorre o vetor de estruturas e verifica se o DDD digitado pelo usuario existe
for (int i = 0; i < sizeof(ddds) / sizeof(ddds[0]); i++) {
// se o DDD for encontrado, imprime o nome do destino correspondente
  if (ddds[i].ddd == ddd) {
        printf("%s\n", ddds[i].destino);
        encontrado = 1;
        break; 
    }
}
// se o DDD nao for encontrado
if (!encontrado) {
    printf("DDD nao cadastrado\n");
}

return 0;
 }