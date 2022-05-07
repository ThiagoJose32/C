#include "ponto.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

Ponto* criar(int x, int y){
  Ponto *p = (Ponto*)malloc(sizeof(Ponto));
  p->x = x; //(*p).x = x;
  p->y = y;
  return p;
}

void imprimir(Ponto *p){
  printf("\nPonto: (%d, %d)", p->x, p->y);
}

void liberar(Ponto *p){
  printf("\n Memoria liberada do ponto");
  free(p);
}

float calcularDistancia(Ponto *p1, Ponto *p2){
  // dAB² = (xB – xA)² + (yB – yA)²
  float distancia;
  distancia = pow((p2->x - p1->x), 2) + pow((p2->y - p1->y), 2);
  distancia = sqrt(distancia);
  return distancia;
}

void transladar(Ponto *p){
  printf("\nNovo valor para x: ");
  scanf("%d", &(*p).x);
  printf("\nNovo valor para Y: ");
  getc(stdin);
  scanf("%d", &p->y);
}
