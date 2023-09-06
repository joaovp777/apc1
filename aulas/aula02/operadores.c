#include <stdio.h>

int main(){
// operadores artimeticos + - * / 
  int soma = 10 + 20;
  int subtracao = soma - 5;
  int multiplacao = soma * 2;
  int divisao = subtracao / 2.0;
  int resto = subtracao % 2;

// operadores incremento/decremto
  int pre_incremento = ++soma; //soma +1
  int pos_incremento = soma++; //soma +1
  
  int pre_decremento = --soma; //soma -1
  int pos_decremento = soma--; //soma -1

  // operadores relacionais
  int menor = 1 < 10;
  int menor_igual = 1 <= 10;
  int maior = 1 > 10;
  int maior_igual = 1 >= 10;
  int igual = 1 == 10; 
  int diferente = 1 != 10;

// operadores logicos
  int e = 0 < 1 && 1 < 10; // 0 <1 <10
  int ou = 0 < 1 || 1 > 10; // 0 < 1 1 > 10
  int nao = !0; // !0 = 1, !1 = 0
  
  return 0;
}