#include <stdio.h>
#include <stdlib.h>
#include "placa.h"

placa* criar(placa *p, int qtd){
  int aux, i;

  printf("\nInforme os dados\n");

  for(i=0;i<qtd;i++){
    printf("-----------------------------");
    printf("\nPlaca %d", i);
    for(aux=0;aux<3;aux++){
      printf("\np[%d].codidgo[%d] = ", i, aux);
      scanf("%d", &p[i].codigo[aux]);
    }
    for(aux=0;aux<4;aux++){
      printf("\np[%d].letra[%d] = ", i, aux);
      scanf("%c", &p[i].letras[aux]);
      scanf("%c", &p[i].letras[aux]);
    }
  }
  
  return p;
}

void imprimir(placa *p, int qtd){
  int aux, i;

  for(i=0;i<qtd;i++){
    printf("-----------------------------");
    printf("\nPlaca %d:\n", i);
    for(aux=0;aux<3;aux++){
      //printf("%d\n", p->codigo[aux]);
      printf("%d\n", p[i].codigo[aux]);
    }
    for(aux=0;aux<4;aux++){
      //printf("%c\n", p->letras[aux]);
      printf("%c\n", p[i].letras[aux]);
    }
  }
}
