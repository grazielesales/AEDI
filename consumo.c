// Beecrowd #1014 - Consumo 

#include <stdio.h>
 
int main() {
 
   int x;
   float y, ConsumoMedio;
   
   scanf("%i", &x);
   scanf("%f", &y);
   
   ConsumoMedio = (float) x / y;
   
   printf("%0.3f km/l\n" , ConsumoMedio);
   
    return 0;
}