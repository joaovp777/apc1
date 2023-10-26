/*Faça um programa em C que calcule o valor do desconto sobre um valor bruto lido com base na escala: até de 100.00 aplica 1%; de 100.01 a 500.00 aplica 5%; acima de 500.00 aplica 10%. */
  
#include <stdio.h>
  
int main (){
  
  float valor_bruto;
  float valor_desconto;
  
  printf("entre com um valor bruto: ");
  int leu_certo = scanf("%f", &valor_bruto);
  
  if(valor_bruto <= 100.00){
    printf("o valor do desconto eh: %.2f\n", valor_bruto
      * 0.01);
    valor_desconto = valor_bruto * 0.01;
    printf("o valor liquido eh: %.2f\n", valor_bruto - valor_desconto);
    
  }  
  else if(valor_bruto <= 500.00){
    printf("o valor do desconto eh: %.2f\n", valor_bruto
      * 0.05);
    valor_desconto = valor_bruto * 0.05;
    printf("o valor liquido eh: %.2f\n", valor_bruto - valor_desconto);
    
  }  
  else{
    printf("o valor do desconto eh: %.2f\n", valor_bruto
      * 0.1);
    valor_desconto = valor_bruto * 0.1;  
    printf("o valor liquido eh: %.2f\n", valor_bruto -
       valor_desconto);
    
  }
  
  return 0;
}