#include <stdio.h>
#include <time.h>

#include "index.h"

int escolherEvento(Evento eventos[], int tamanho) {
  int posicao = 0;
  for (int index = 0; index <= tamanho - 1; index++) {
    printf("%i-%s", index + 1, eventos[index].name);
  }
  scanf("%i", &posicao);
  if (posicao > tamanho || posicao < 1) {
    printf("Evento não existente, por favor escolha novamente\n");
    return escolherEvento(eventos, tamanho);
  }
  return posicao - 1;
}