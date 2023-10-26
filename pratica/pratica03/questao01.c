/*Faça um programa em C que determine se um número inteiro lido é par ou ímpar.*/


 #include <stdio.h>

int main (){
  
  int numero;
  
  printf("entre com um numero: ");
  int leu_certo = scanf("%i", &numero);
  
  if(numero % 2 == 0){
    printf("o numero %i eh par\n", numero);
  }  
  else{
    printf("o numero %i eh impar\n", numero);
  }
  
  return 0;
}