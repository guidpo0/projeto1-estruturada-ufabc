#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "index.h"

// Imprime o menu de ação
void exibirMenu () {

  printf("Menu:\n");
  printf("1-Adicionar\n");
  printf("2-Editar\n");
  printf("3-Remover\n");
  printf("4-Ver todos\n");
  printf("0-Sair\n");
  
}

// Imprime o menu de categoria
void exibirCategorias(){

  printf("Escolha a categoria:\n");
  printf("1-social\n");
  printf("2-trabalho\n");
  printf("3-estudo\n");
  printf("4-aniversarios\n");
  printf("5-beleza/saude\n");
  printf("6-viagens\n");
  printf("7-outros\n");

}

// Mapeia as categorias e imprime de acordo com o numero da categoria, passado como parametro
void exibirCategoriasPorIndex(int idx){

  switch(idx){
    case 1:
      printf("social");
      break;
    case 2:
      printf("trabalho");
      break;
    case 3:
      printf("estudo");
      break;
    case 4:
      printf("aniversarios");
      break;
    case 5:
      printf("beleza/saude");
      break;
    case 6:
      printf("viagens");
      break;
    case 7:
      printf("outros");
      break;
  }
 
}

// Imprime o evento formatado
void exibirEvento(Evento evento){
  char datahora[100];
  strftime( datahora, sizeof(datahora), "%d.%m.%Y - %H:%M:%S", localtime( &evento.data ) );

  printf("\nNome: %s", evento.name);
  printf("Categoria: ");
  exibirCategoriasPorIndex(evento.categoria);
  printf("\nData/Hora:: %s\n", datahora);
}  