#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "../auxiliares/index.h"

void exibir_todos(Evento eventos[], int lastIdx){
  printf("\n\n***** Eventos *****\n");  

  for( int idx = 0; idx < lastIdx; idx++){
    exibirEvento(eventos[idx]);

    printf("\n**************\n");
  }
}



