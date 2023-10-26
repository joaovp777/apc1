/*faça um programa em C que leia dez números e imprima o maior e o menor entre eles.*/
  
#include <stdio.h>
  
int main (){
  
  int numero;
  int maior = 0;
  int menor = 0;
  
  printf("entre com um numero inteiro: ");
  int leu_certo = scanf("%i", &numero);
  
  
  for(int i = 0; i < 9; i++){
    printf("entre com outro numero inteiro: ");
    int leu_certo = scanf("%i", &numero);

    if(i == 0){
      maior = numero;
      menor = numero;
    }  
    else{
      if(numero > maior){
        maior = numero;
      } 
      if(numero < menor){
        menor = numero;
      }
    }
    
  }
  
  printf("o maior eh %i e o menor eh %i\n", maior, menor);
 
  
  return 0;
}
      