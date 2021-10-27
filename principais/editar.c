#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "../auxiliares/index.h"

void editarEvento(Evento *eventos, int tamanho){
  struct tm tm;
  printf("Escolha o evento a ser editado:\n");
  int index = escolherEvento(eventos, tamanho);

  eventos[index] = criarEvento();

  printf("*** Evento editado ***\n");
  exibirEvento(eventos[index]);
  printf("\n***********************\n");
}
