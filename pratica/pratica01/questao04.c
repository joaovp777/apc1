/*
Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.
 */ 

#include <stdio.h>
#define ICMS 0.17F
#define CONFINS 0.076F
#define PIS_PASEP 0.0165F  

int main (){
 
  float preco_inicial = 100;
  float valor_icms = preco_inicial * ICMS;
  float valor_confins = preco_inicial * CONFINS;
  float valor_pispasep = preco_inicial * PIS_PASEP;
  
  float preco_final=  (1 + ICMS + CONFINS + PIS_PASEP) * preco_inicial;

  printf("o preço final do produto e %f\n", preco_final);
  printf("o valor do imposto ICMS %f\n", valor_icms );
  printf("o valor do imposto ICMS %f\n", valor_confins);
  printf("o valor do imposto ICMS %f\n", valor_pispasep);
  
  return 0;
}