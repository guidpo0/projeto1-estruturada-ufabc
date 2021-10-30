#include <stdio.h>


int solicitarAcao(){
  int retorno = -1;

  exibirMenu();

  scanf("%d", &retorno);

  while(retorno < 0 || retorno > 4){

    printf("*** Entrada inválida ***\n");
    exibirMenu();
    
    scanf("%d", &retorno);
  }

  return retorno;
}