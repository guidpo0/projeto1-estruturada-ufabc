// https://www.tutorialspoint.com/c_standard_library/time_h.htm
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "index.h"

// Lê a categoria
int lerCategoria (){
  int categoria = -1;

  exibirCategorias();
  scanf("%d", &categoria);

  if(categoria < 1 || categoria >= 8){
    printf("*** Entrada inválida ***\n");
    
    return lerCategoria();
  }

  // Retorna um inteiro que representa uma categoria
  return categoria;
}

// Lê a data
struct tm lerData(){
  int dia, mes, ano, hora;
  struct tm tm;

  printf("Entre apenas com a hora do evento:\n");
  scanf("%d", &hora);
  printf("Entre com o dia do evento:\n");
  scanf("%d", &dia);
  printf("Entre com o mês do evento:\n");
  scanf("%d", &mes);
  printf("Entre com o ano do evento:\n");
  scanf("%d", &ano);

  tm.tm_mday = dia;
  tm.tm_mon = mes - 1;
  tm.tm_year = ano - 1900;
  tm.tm_hour = hora;
  tm.tm_min = 0;
  tm.tm_sec = 0;

  return tm;
}