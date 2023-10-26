#include <stdio.h>
#include <stdlib.h>


int main(){
  char opcao = 1;
  
  while(opcao != '0'){
    int ok = system("clear");
    printf("MENU PRINCIPAL\n");
    printf("1 - consultar saldo\n");
    printf("2 - fazer recarga\n");
    printf("3 - lista recados\n");
    printf("0 - sair\n");
    printf("escolha uma opcao => ");
    int leu_certo = scanf("%c", &opcao);
    getchar();

    ok = system("clear");

    switch(opcao){
      case '1' : printf("seu saldo e R$ 10,00\n"); break;
      case '2' : printf("escolha o valo de recarga\n"); break;
      case '3' : printf(" nao tem recados\n"); break;
      case '0' : printf("obrigado por usar nossos servicos\n"); break;
      default: printf("opcao invalida\n"); break;
    }
    printf("pressione ENTER PARA CONTINUAR");
    getchar();
  }

  return 0;
}