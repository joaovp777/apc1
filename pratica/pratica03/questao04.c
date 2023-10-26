/* Faça um programa em C que leia uma tecla pressionada e determine se ela é uma letra, um dígito ou um caractere especial.*/

#include <stdio.h>
  
int main (){
  
  char tecla;
  
  printf("entre com uma tecla: ");
  int leu_certo = scanf("%c", &tecla);
  
  if(tecla >= 'a' && tecla <= 'z'){
    printf("letra\n");
  }
  else if(tecla >= '0' && tecla <= '9'){
    printf("digito\n");
  }
  else{
    printf("caractere especial\n");
  }
  
  return 0;
}
