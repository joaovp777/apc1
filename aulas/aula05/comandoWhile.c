#include  <stdio.h>

int main(){

  int numero = 0;

  printf( "Digite um numero inteiro entre 1 e 10: ");
  int leu_certo = scanf("%i", &numero);

  while(numero < 1 || numero > 10){)
   getchar();
    printf("numero invalido. entre com um numero entre 1 e 10: ");
    leu_certo = scanf("%i", &numero);
  }
  
  do{
printf("entre com um numero inteiro entre 1 e 10: ");
    imt leu_certo = scanf("%i", &numero);
    gentchar();
  }while(numero <1 || numero > 10);
  
  printf("numero lido: %i\n", numero);
  int i= 0 
  while(i<10 ){
    printf("%i x  %i = %i\n", numero, i +1 , numero * (i +1));
    i++;
  }
    return 0;
    
  }