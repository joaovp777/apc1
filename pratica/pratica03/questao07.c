/*
Escrever um programa em C que liste os 10 primeiros números da série de Fibonacci.
*/

  
#include <stdio.h>
  
int main (){
  
  int fibonacci = 0;
  int fibonacci_anterior = 0;
  int fibonacci_atual = 1;
  
  printf("%i, ", fibonacci);
  printf("%i, ", fibonacci_anterior);
  printf("%i, ", fibonacci_atual);
  
  for(int i = 0; i < 8; i++){
    fibonacci = fibonacci_anterior + fibonacci_atual;
    fibonacci_anterior = fibonacci_atual;
    fibonacci_atual = fibonacci;
    
    printf("%i, ", fibonacci);
  }
  
  printf("\n");
  
  return 0;
}