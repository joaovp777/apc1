/*faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.
*/


#include <stdio.h>

int main (){

  float valor_base;
  float valor_altura;

  printf("valor da base e: ");
  scanf("%f", &valor_base);
  printf("valor da altura e: ");
  scanf("%f",&valor_altura);
  
float area = (valor_base * valor_altura)/2;

printf("o valor da area e %f\n", area);

  return 0;
}


/*
#include <stdio.h>

int main (){

  float valor_base = 3.5f;
  float valor_altura = 4.0f;

  printf("valor da base e: ");
  scanf("%f", &valor_base);
  printf("valor da altura e: ");
  scanf("%f",&valor_altura);
  
float area = (valor_base * valor_altura)/2;

printf("o valor da area e %f\n", area);

  return 0;
}
*/