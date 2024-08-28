#include <stdio.h>

int main () {
    
  int valor[100];
  int maior_numero, posicao;

  // Lendo 100 números inteiros
  for(int i = 0; i < 100; i++) {
      scanf("%d", &valor[i]);
  }
  // Encontrando o maior número
  maior_numero = valor[0];
  posicao = 1;

  for(int i = 1; i < 100; i++){
      if(valor[i] > maior_numero) {
          maior_numero = valor[i];
          posicao = i + 1;
      }
    }
  // Imprimindo o maior número e sua posição
      printf("%d\n", maior_numero); 
      printf("%d\n", posicao);
  
  return 0;
  
}