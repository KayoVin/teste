#include <stdio.h>

int main(){

  float numero;
  float desconto;
  

  printf("Digite o valor do produto: ");
  scanf("%f", &numero);

  printf("O valor do desconto: ");
  scanf("%f", &desconto);

   float total; 
   float valor_final;
   float final2;
   

  total = desconto / 100;
  valor_final = total * numero;
  final2 = numero - valor_final;

  printf("O valor do desconto final eh: %f", final2);




  







}