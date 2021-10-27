#include <stdio.h>
#include <time.h>

#include "./auxiliares/index.h"

int main(void) {
  // Declaração das variaveis do tipo inteiro; quantidadeEventos também representa o index do ultimo evento +1
  int acao, quantidadeEventos = 0;
  Evento eventos[50];

  printf("*** Agenda PE 2021.3 ***\n");

  // Loop infinito
  for(;;){
    // Soclicita que o usuário entre com uma ação do menu
    acao = solicitarAcao();

    // Executa a lógica referente a ação escolhida
    switch(acao){
      case 0:
        printf("*** Programa Encerrado ***");
        return 0;
      case 1:
        // Cria um evento e armazena na ultima posição desocupada no array de eventos;
        eventos[quantidadeEventos] = criarEvento();
        
        // Imprime o evento criado
        printf("*** Evento adicionado ***\n");
        exibirEvento(eventos[quantidadeEventos]);
        printf("\n***********************\n");

        // exibir a última posição desocupada
        quantidadeEventos++;
    
      case 2:
        editarEvento(eventos, quantidadeEventos);
        break;
      case 3:
        removerEvento(eventos, quantidadeEventos);
        quantidadeEventos--;
        break;
      case 4:
        exibir_todos(eventos, quantidadeEventos);
        break;
    }

  }
  
  return 0;
}