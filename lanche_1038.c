#include <stdio.h>

int main() {
//declarando variaveis
   int codigo, quantidade;
   float precos[] = {0, 4, 4.50, 5, 2, 1.50};
   float valor;

//entrada de dados
   scanf("%i", &codigo);
   scanf("%i", &quantidade);
  
//condição para o codigo
   if (codigo >= 1 && codigo <= 5) {
       valor = precos[codigo] * quantidade;
//saida de dados
       printf("Total: R$ %0.2f\n" , valor);
   }

    return 0;
}