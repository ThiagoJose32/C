#include <stdio.h>
#include <stdlib.h>
#include "placa.h"

int main(void) {
  int qtd, opc;
  placa *Placas;
  
  printf("Quantas placas deseja cadastrar? ");
  scanf("%d", &qtd);

  placa *p = (placa*)malloc(sizeof(placa)*qtd);
  
  criar(p, qtd);

  printf("Dejesa imprimir todas as placas? 1-Sim | 2-Nao : ");
  scanf("%d", &opc);
  switch(opc){
    case 1:
      system("clear");
      imprimir(p, qtd);
    break;
    case 2:

    break;
  }
  
}
