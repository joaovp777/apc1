/* Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).
*/


#include <stdio.h>
#include <math.h>

int main (){
  float coeficiente_a;
  float coeficiente_b;
  float coeficiente_c;

  printf("insera o valor do coeficiente a: ");
  scanf("%f", &coeficiente_a);
  printf("insera o valor do coeficiente b: ");
  scanf("%f", &coeficiente_b);
  printf("insera o valor do coeficiente c: ");
  scanf("%f", &coeficiente_c);

  double delta = pow(coeficiente_b, 2) - 4 * coeficiente_a * coeficiente_c;
  double raiz_x1 = (-coeficiente_b + sqrt(delta)) / 2 * coeficiente_a;
  double raiz_x2 = (-coeficiente_b - sqrt(delta)) / 2 * coeficiente_a;
  
  printf("as raizes da equacao %f %f %.f sao %f e %f\n",coeficiente_a, coeficiente_c, coeficiente_c,raiz_x1, raiz_x2);

  return 0; 
}