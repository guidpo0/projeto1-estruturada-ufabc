#include <stdio.h>
#include <time.h>

#include "index.h"

int escolherEvento(Evento eventos[], int tamanho) {
  int posicao = 0;
  for (int index = 0; index <= tamanho - 1; index++) {
    printf("%i-%s.", index + 1, eventos[index].name);
  }
  scanf("%i", &posicao);
  return posicao - 1;
}