// Beecrowd #1014 - Consumo 

#include <stdio.h>
 
int main() {

//Declarar variavéis
   int x;
   float y, ConsumoMedio;

//Pedir valores
   scanf("%i", &x);
   scanf("%f", &y);
   
//Calculo do gasto médio de combustivel
   ConsumoMedio = (float) x / y;
   
//Imprimir resultado
   printf("%0.3f km/l\n" , ConsumoMedio);
   
    return 0;
}