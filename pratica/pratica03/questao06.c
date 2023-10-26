/*Faça um programa em C que liste todos os múltiplos de 3, entre 1 e 100. */


/*
#include <stdio.h>

int main (){  
  
  int i;
  
  for (i = 1; i <= 100; i++){

    if (i % 3 == 0){
      printf("%d\n", i);
    }
  }

  return 0;
}
*/

#include <stdio.h>

int main (){
  
  int multiplo = 0;
  
  printf("entre com um numero entre 1 a 100: ");
  int leu_certo = scanf("%i", &multiplo);
  
  for(int i = 0; i < 100; i++){
    if((i+ 1) % multiplo == 0){
      printf("%i, ", i + 1);
    }
  }

  printf("\n");

  return 0;
}