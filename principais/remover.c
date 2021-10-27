#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "../auxiliares/index.h"


void removerEvento(Evento *eventos, int tamanho){
  printf("Escolha o evento a ser removido:\n");
  int posicao = escolherEvento(eventos, tamanho);

  for (int index = posicao; index <= tamanho; index++) {
    eventos[index] = eventos[index + 1];
  }

  printf("*** Evento removido ***");
}
