#include "ponto.h"
#include <stdio.h>
#include <stdlib.h>

Ponto* criar(int x, int y){
  Ponto *p = (Ponto*)malloc(sizeof(Ponto));
  p->x = x; //(*p).x = x;
  p->y = y;
  return p;
}

void imprimir(Ponto *p){
  printf("\n Ponto: (%d, %d)", p->x, p->y);
}

void liberar(Ponto *p){
  printf("\n Memoria liberada do ponto");
  free(p);
}

/*float calcularDistancia(Ponto *p1, Ponto *p2){
  
}*/
