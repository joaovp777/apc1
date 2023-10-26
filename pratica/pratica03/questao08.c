/*Faça um programa em C que calcule o fatorial de um número inteiro.
*/

#include <stdio.h>

int main (){
  
  int numero;
  int fatorial = 1;
  
  printf("entre com um numero: ");
  int leu_certo = scanf("%i", &numero);
  
  for(int i = 1; i <= numero; i++){
    fatorial = fatorial * i;
  }
  
  printf("o fatorial de %i eh %i\n", numero, fatorial);
  
  return 0;
}
