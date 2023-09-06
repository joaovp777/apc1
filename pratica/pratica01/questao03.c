/*
Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.
*/

#include <stdio.h>

int main(){
  int raio_pizza = 20;
  const float PI = 3.1416f;
  
  float perimetro_da_pizza =2 * PI * raio_pizza;
  
  printf("o perimetro da pizza e %f\n",perimetro_da_pizza );


  return 0;
}