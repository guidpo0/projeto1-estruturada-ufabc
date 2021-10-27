#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "../auxiliares/index.h"

Evento criarEvento(){
  struct tm tm;
  Evento e;

  //  Solicita que o usuário selecione um inteiro que representa um categoria, o mesmo é armazenado no evento
  e.categoria = lerCategoria();

  // Limpa "lixos" de scanf anterior
  while (getchar() != '\n');
  // fflush(stdin);

  // Faz a leitura do nome do evento
  printf("Entre com o nome do evento:\n");
	fgets( e.name, 100, stdin );

  //  Solicita que o usuário entre com os valores referente a data, retorna um timestamp que é armazenado na data do evento
  tm = lerData();
  e.data = mktime( &tm );

  return e;

}